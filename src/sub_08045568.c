void sub_08045504(void);
void sub_08045F70(void);
u8 sub_080448A4(void *, s32);

void sub_08045568(Entity *arg0) {
    arg0->unk1C = 0x60;
    if (sub_080448A4(arg0, 0xE) != 0 && arg0->unk60 == 0) {
        arg0->unk64 = (u32)sub_08045504;
    } else {
        arg0->unk64 = (u32)sub_08045F70;
    }
}
