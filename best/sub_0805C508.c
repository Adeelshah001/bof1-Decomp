typedef struct {
    u8 pad00[0x36];
    u8 unk36;
    u8 pad37[3];
    u8 unk3A, unk3B;
} MenuState5C;
typedef struct {
    u16 pad00[8];
    u16 offset;
} MenuText5C;
extern MenuState5C D_030045B0;
extern MenuText5C D_03004760;
extern u8 D_03004620[];
extern const u8 D_0822077C[];
void sub_08066F5C(s32);
void sub_0805B1A8(void);

s32 sub_0805C508(u8 selection)
{
    u32 index;
    u8 zero;
    u32 low, high;
    u8 *state = D_03004620;
    MenuText5C *text;
    u32 data;
    MenuState5C *menu;

    zero = 0;
    state[2] = selection;
    state[3] = zero;
    text = &D_03004760;
    data = (u32)D_0822077C;
    menu = &D_030045B0;
    index = menu->unk3A * 2;
    low = *(const volatile u8 *)(index + data);
    index++;
    high = *(const volatile u8 *)(index + data);
    low |= high << 8;
    low += 0x700;
    text->offset = low;
    if (menu->unk3B != 2) {
        index = text->offset;
        index += 8;
        menu->unk36 = *(const u8 *)(index + data);
        sub_08066F5C(1);
        sub_0805B1A8();
    }
    state[7] = 0;
    return 0;
}
