extern const char D_080A6D48[];
extern const char D_080A6CCC[];

struct Boss06Pet {
    u8 pad00[6];
    u16 unk6;
    u8 pad08[0x24];
    u16 unk2C;
    u8 pad2E[0x1E];
    u8 unk4C;
};

void sub_080352D0(const char *, const char *, s32, ...);
void sub_08088C10(struct Boss06Pet *);
void sub_080882BC(struct Boss06Pet *);
void sub_0803EF2C(struct Boss06Pet *);
void sub_0807CA08(struct Boss06Pet *);

void sub_080885C0(struct Boss06Pet *pet)
{
    switch (pet->unk4C) {
    case 0:
        sub_08088C10(pet);
        break;
    case 2:
        sub_080882BC(pet);
        break;
    case 4:
        sub_0803EF2C(pet);
        break;
    default:
        sub_080352D0(D_080A6D48, D_080A6CCC, 0x34B, pet->unk4C);
        break;
    }
    pet->unk2C = pet->unk6 + 0x40;
    sub_0807CA08(pet);
}
