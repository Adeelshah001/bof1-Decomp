typedef struct Bigint Bigint;
struct Bigint {
    Bigint *next;
    s32 sizeClass;
    s32 capacity;
    s32 sign;
    s32 words;
    u32 digits[1];
};

typedef struct {
    u8 pad[0x4C];
    Bigint **freeLists;
} BigintContext;

extern s32 sub_080A44DC(void);
extern s32 sub_080A44FC(s32);
extern s32 sub_080A45CC(s32);
extern s32 sub_080A46F4(s32, const void *, s32);
extern u8 D_03001150[];

s32 sub_080A4718(s32 handle, const void *buffer, s32 length)
{
    s32 slot;
    s32 result;
    s32 bytesRemaining;
    sub_080A44FC(handle);
    slot = sub_080A44DC();
    result = sub_080A46F4(handle, buffer, length);
    if (result == -1 || result == length)
        return sub_080A45CC(-1);

    bytesRemaining = length - result;
    if (slot != 0x14) {
        u8 *base = D_03001150;
        s32 offset = slot * 8;
        base += 4;
        *(s32 *)(offset + (u32)base) += bytesRemaining;
    }
    return bytesRemaining;
}

