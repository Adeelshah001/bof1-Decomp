struct UnkStruct8B72C {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x41 - 0x2E];
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x6C - 0x56];
    struct UnkStruct8B72C *unk6C;
    u8 pad70[0xE4 - 0x70];
    u16 unkE4;
    u16 unkE6;
};

void sub_08037FC4(struct UnkStruct8B72C *, u16);
void sub_0807C638(struct UnkStruct8B72C *, s32);
void sub_08088624(struct UnkStruct8B72C *, s32, s32, s32);
u16 sub_080915B4(struct UnkStruct8B72C *);

void sub_0808B72C(struct UnkStruct8B72C *arg0)
{
    u8 *p54 = &arg0->unk54;
    u32 zero = 0;
    u16 *pE6;
    u16 val;
    struct UnkStruct8B72C *child;
    struct UnkStruct8B72C *child2;

    *p54 = 0xA0;
    arg0->unk55 = zero;
    sub_08037FC4(arg0, sub_080915B4(arg0));
    val = 0x2F48;
    arg0->unk6 = val;
    arg0->unk2C = val;
    pE6 = &arg0->unkE6;
    *pE6 = val;
    val = 0xF40;
    arg0->unk2 = val;
    pE6[-1] = val;
    arg0->unk4C = 2;
    sub_0807C638(arg0, 9);
    child = arg0->unk6C;
    child->unk41 = 0xA;
    sub_08088624(child, 0x68E0, 0x1A0, 0xA0);
    child2 = arg0->unk6C;
    child2->unk6C = arg0;
    child2->unk6 = arg0->unk6 - 0x10;
}
