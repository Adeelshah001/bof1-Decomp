extern u8 D_0202DBD0[];
extern u16 D_03004E18, D_03004E14, D_03004E08, D_03004E0C;
void sub_0803D6C4(void) {
    u16 *out = &D_03004E18;
    u8 *state = D_0202DBD0;
    *out = *(u16 *)(state + 0x288);
    D_03004E14 = *(u16 *)(state + 0x28C);
    D_03004E08 = *(u16 *)(state + 0x28A);
    D_03004E0C = *(u16 *)(state + 0x28E);
}
void sub_0803D678(void) {
    u16 *out = &D_03004E18;
    u8 *state = D_0202DBD0;
    u16 *slot = (u16 *)(state + 0x288);
    u32 zero = 0;
    u32 value = 0x7F01;
    *slot = value;
    *out = value;
    D_03004E08 = D_03004E0C = zero;
    *(u16 *)(state + 0x28A) = zero;
    *(u16 *)(state + 0x28E) = zero;
}
