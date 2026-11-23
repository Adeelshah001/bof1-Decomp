void sub_08001F80(s32, s32, s32);
void sub_0800312C(s32, s32);
void sub_08004EA0(s32);
void sub_080A0770(s32);

extern u16 D_0300413C[];
extern u8 D_03004830[];
extern u32 D_080F6184[];

void sub_0800BD68(void) {
    u16 *dest = D_0300413C;
    u8 *base = D_03004830;
    u8 *state = &base[0x2B];
    s32 val1;
    s32 val2;
    s32 zero_state;
    s32 zero_a;
    s32 zero_b;
    s32 zero_c;
    s32 val_inc;
    u8 *ptr;

    val1 = *(s8 *)state;
    *dest = (u16)val1;

    val2 = *(s8 *)state;
    if (val2 != 0) {
        sub_08004EA0(0x8117);
        ptr = &base[0x2A];
        zero_state = 0;
        *ptr = 0x0B;
        *state = (u8)zero_state;
        sub_080A0770(D_080F6184[0]);
    } else {
        sub_0800312C(0x10, 0x0E);
        zero_a = 0;
        zero_b = 0;
        zero_c = 0;
        sub_08001F80(zero_a, zero_b, zero_c);
        val_inc = *state;
        val_inc++;
        *state = (u8)val_inc;
    }
}
