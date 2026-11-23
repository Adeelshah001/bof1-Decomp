typedef struct {
    u8 pad[0xB8];
    u8 flags : 8;
} FlagByteB8;

typedef struct {
    u8 pad[0xF0];
    u8 flags : 8;
} FlagByteF0;

void sub_08034994(void *arg0) {
    ((FlagByteB8 *)arg0)->flags |= 8;
    *(s32 *)((s8 *)arg0 + 0x88) += 2;
}

void sub_080348FC(void *arg0) {
    ((FlagByteF0 *)arg0)->flags |= 0x40;
}
