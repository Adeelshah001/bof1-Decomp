extern void (*D_080F700C[])(void);

void sub_08019584(void)
{
    void (**handlers)(void) = D_080F700C;
    u8 *state = D_03004830;
    handlers[(s8)state[0x2A]]();
}
