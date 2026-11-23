typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x38 - 0x2C];
    u16 unk38;
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x55 - 0x42];
    u8 unk55;
    u8 pad56[0x64 - 0x56];
    void (*unk64)(void *);
    u8 pad68[0xE0 - 0x68];
} PoolEntity;

void sub_08048284(PoolEntity *arg0, u8 arg1, u8 arg2, u8 arg3);
void sub_080379D4(s32);
void sub_08037FC4(PoolEntity *, s32);
void sub_0804D900(void *);
void sub_0804D9E0(void *);
void sub_0804E570(void *);
void sub_0804AC0C(void *);

void sub_08048468(PoolEntity *arg0) {
    arg0->unk64 = sub_0804D900;
    arg0->unk2A = 0x128;
    sub_08048284(arg0, 2, 0x3A, 1);
}

void sub_08048488(PoolEntity *arg0) {
    arg0->unk38 = 0x20;
    arg0->unk55 = 4;
    sub_080379D4(0x26);
    arg0->unk64 = sub_0804D9E0;
    arg0->unk2A = 0x132;
    sub_08048284(arg0, 0, 0, 0);
    sub_08037FC4(arg0, 6);
}

void sub_080484E0(PoolEntity *arg0) {
    arg0->unk64 = sub_0804E570;
    arg0->unk2A = 0x180;
    sub_08048284(arg0, 0xA, 0x38, 0);
}

void sub_0804858C(PoolEntity *arg0) {
    arg0->unk64 = sub_0804AC0C;
    arg0->unk2A = 0x128;
    sub_08048284(arg0, 2, 0x3E, 1);
    sub_08037FC4(arg0, 6);
}
