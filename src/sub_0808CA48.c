struct UnkStruct8CA {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x74 - 0x56];
    struct UnkStruct8CA *unk74;
    u32 unk78;
    u8 pad7C[0xE0 - 0x7C];
    u8 unkE0;
    u8 unkE1;
};

s32 sub_0807CE30(struct UnkStruct8CA *);
void sub_0807C484(struct UnkStruct8CA *);
s32 sub_08083300(struct UnkStruct8CA *, s32);
void sub_0807CB08(void);
u8 sub_08003104(void);

void sub_0808CA48(struct UnkStruct8CA *arg0, u8 arg1) {
    s32 r5;

    arg0->unkE1 = arg1;
    if (sub_0807CE30(arg0) != 0) {
        sub_0807C484(arg0);
        do {
            r5 = sub_08083300(arg0, 0x3A);
        } while (r5 != 0);
        arg0->unk74->unk78 = arg0->unk78;
        sub_0807CB08();
        arg0->unk54 = (sub_08003104() & 3) + 0x3C;
        arg0->unk55 = r5;
        arg0->unk4D = 4;
    } else {
        arg0->unkE0 = 6;
        arg0->unk54 = 0x3C;
        arg0->unk4D = 8;
    }
}
