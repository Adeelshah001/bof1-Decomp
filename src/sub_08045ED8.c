void sub_0803A8EC(Entity *);
u8 sub_08055660(u8);
void sub_08045EB8(Entity *);

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
