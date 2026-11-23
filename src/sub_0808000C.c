extern u8 D_0300298C[];
void sub_08080688(void *arg0, void *arg1);

static inline u8 readEntityByte(u8 *address)
{
    return *address;
}

static inline s32 sub_0808062C_inline(u8 *state, u8 **cursor)
{
    u8 *previous;
next:
    previous = *cursor;
    *cursor = previous + 0x124;
    if (previous[0x15E] && !(readEntityByte(previous + 0x214) & 0x50) && !(readEntityByte(previous + 0x215) & 0x80))
        return 0;
    state[9]--;
    if (--state[8] != 0)
        goto next;
    return 1;
}

void sub_0808000C(u8 *state, void *arg1)
{
    u8 count = state[0x60];
    u8 *cursor;
    state[8] = count;
    state[9] = count;
    cursor = D_0300298C;
    sub_0808062C_inline(state, &cursor);
    sub_08080688(arg1, cursor);
}
