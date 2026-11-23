extern u8 D_03004F50[];
extern void sub_0807BF60(void *arg0);
extern void sub_0807D050(void *arg0);
extern void sub_0807D080(void *arg0);

void sub_0807CC18(void *arg0)
{
    u8 val;

    if (D_03004F50[0x10] <= 0x28)
        D_03004F50[0x10]++;

    val = *(u8 *)((u8 *)arg0 + 0xD9);
    if (val > 8)
        return;

    switch (val) {
    case 0:
        return;
    case 1:
        return;
    case 2:
        sub_0807D050(arg0);
        return;
    case 3:
        return;
    case 4:
        sub_0807D080(arg0);
        return;
    case 5:
        return;
    case 6:
        return;
    case 7:
        return;
    case 8:
        sub_0807BF60(arg0);
        return;
    default:
        return;
    }
}
