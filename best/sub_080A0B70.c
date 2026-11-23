typedef struct {
    u8 *base;
    s32 size;
} StdioBuffer;

typedef struct {
    u8 *position;
    s32 readCount;
    s32 writeCount;
    s16 flags;
    s16 file;
    StdioBuffer buffer;
    s32 lineBufferSize;
    void *cookie;
    void *readProc;
    s32 (*writeProc)(void *, const char *, s32);
    u8 pad28[0x2C];
    void *reent;
} StdioFile;

s32 sub_080A0BE4(StdioFile *stream, const char *format, void *args);
s32 sub_080A2BBC(StdioFile *stream);

s32 sub_080A0B70(StdioFile *stream, const char *format, void *args)
{
    StdioFile temporary;
    u8 buffer[1024];
    StdioFile *temp;
    s32 result;
    u32 flags;
    u32 error;
    u16 oldFlags;

    temporary.reent = stream->reent;
    temp = &temporary;
    flags = ~2;
    result = (u16)stream->flags;
    flags &= result;
    result = 0;
    temp->flags = flags;
    temp->file = stream->file;
    temporary.cookie = stream->cookie;
    temporary.writeProc = stream->writeProc;
    temporary.buffer.base = temporary.position = buffer;
    temporary.buffer.size = temporary.writeCount = sizeof(buffer);
    temporary.lineBufferSize = result;

    result = sub_080A0BE4(&temporary, format, args);
    if (result >= 0 && sub_080A2BBC(&temporary) != 0)
        result = -1;

    temp = &temporary;
    error = 0x40;
    oldFlags = (u16)temp->flags;
    error &= oldFlags;
    if (error) {
        u16 set = 0x40;
        set |= (u16)stream->flags;
        stream->flags = set;
    }
    return result;
}
