extern u8 D_0300169C;
extern u8 D_03004620[], D_03004760[];
extern const u8 D_081006EC[], D_08100BDA[], D_08100BDE[], D_08100BE4[], D_08100BEE[];

void sub_08059978(void);
void sub_0805B308(const u8 *);
void sub_0805B358(const u8 *, s32, s32, s32, s32);
void sub_0805C660(void);
void sub_0805C7B8(s32);
void sub_0805D754(s32, s32, s32);
void sub_080615F8(void);
void sub_08068938(s32, s32);
void sub_08068984(s32, s32, s32, s32, const u8 *);

s32 sub_0805E380(void)
{
    u8 *state;
    s16 zero;

    if (D_03004620[7] == 0) {
        sub_08068938(0, 0);
        sub_08068938(1, 1);
        sub_08068938(2, 2);
        sub_08068938(3, 3);
        D_03004760[0x18] = 0x10;
        sub_0805D754(1, 1, 1);
        sub_08059978();
        sub_0805B308(D_08100BEE);
        sub_0805C660();
        if (D_0300169C != 0) {
            sub_080615F8();
        } else {
            sub_0805C7B8(1);
        }
        sub_08068984(2, 1, 1, 0, D_08100BDA + 1);
        sub_08068984(2, 1, 3, 0, D_08100BDE + 1);
        sub_08068984(2, 1, 5, 0, D_08100BE4);
        sub_0805B358(D_081006EC, 0, 2, 0, 0);
        D_03004620[7] = 1;
    }
    state = D_03004620;
    zero = 0;
    state[3] = 2;
    D_03004760[0x19] = zero;
    return zero;
}
