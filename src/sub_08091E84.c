extern u8 D_03004F50[];

typedef struct Entity91 {
    u8 pad00[0x02];
    u8 unk2;
    u8 pad03[0x06 - 0x03];
    u8 unk6;
    u8 pad07[0x4C - 0x07];
    u8 unk4C;
    u8 pad4D[0x78 - 0x4D];
    struct Entity91 *unk78;
} Entity91;

u16 sub_0807B2CC(Entity91 *arg0);
void sub_08095EFC(Entity91 *arg0);
void sub_08096CBC(Entity91 *arg0);
void sub_080379D4(s32 arg0);
void sub_08037FC4(Entity91 *arg0, s32 arg1);

void sub_08091E84(Entity91 *arg0) {
    if (arg0->unk4C != 0) {
        if (sub_0807B2CC(arg0) != 0) {
            sub_08095EFC(arg0);
        } else {
            sub_08096CBC(arg0);
        }
    } else {
        Entity91 *target;
        u8 flag;
        s32 offset;

        sub_080379D4(0x19);
        target = arg0->unk78;
        flag = D_03004F50[0x58];
        offset = 0x10;
        if (flag != 0) {
            offset = -8;
        }
        arg0->unk2 = target->unk2 + offset;
        arg0->unk6 = target->unk6 + offset;
        arg0->unk4C++;
        sub_08037FC4(arg0, 0);
        sub_08095EFC(arg0);
    }
}
