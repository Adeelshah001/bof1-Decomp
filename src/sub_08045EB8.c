extern u8 D_03001850;

void sub_0803EE38(Entity *);
void sub_0803A8EC(Entity *);
u8 sub_08055660(u8);
void sub_08046050(void);

void sub_08045EB8(Entity *arg0)
{
    if (--arg0->unk54 == 0) {
        sub_0803EE38(arg0);
    }
}

void sub_08045ED8(Entity *arg0)
{
    if (sub_08055660(((u8 *)arg0)[0x5C]) == 0) {
        sub_0803A8EC(arg0);
    } else {
        void (*fn)(Entity *);
        arg0->unk54 = 0x20;
        fn = sub_08045EB8;
        arg0->unk64 = (u32)fn;
        fn(arg0);
    }
}

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

void sub_08045F38(Entity *arg0)
{
    Entity *e = arg0;
    if (D_03001850 == ((u8 *)arg0)[0x5C]) {
        arg0->unk64 = (u32)sub_08046050;
    }
    sub_0803A8EC(e);
}
