extern u8 D_03001850;

void sub_0803EE38(Entity *);
void sub_08045EB8(Entity *);

void sub_08045E54(Entity *arg0)
{
    if (D_03001850 == ((u8 *)arg0)[0x5C]) {
        arg0->unk54 = 0x20;
        arg0->unk64 = (u32)sub_08045EB8;
        if (--arg0->unk54 == 0) {
            sub_0803EE38(arg0);
        }
    }
}
