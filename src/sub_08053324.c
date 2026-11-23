void sub_08037FC4(void *, u16);
void sub_08053378(Entity *);
s32 sub_080515D8(Entity *);
void sub_08000CD8(void);
void sub_0803EE6C(Entity *);
extern u16 D_03001648;
extern u16 D_020291C0[];
typedef struct {
    u16 color;
    u16 padding[3];
} ColorEntry;
extern ColorEntry *D_03001650;
typedef struct {
    u8 padding[0x2B];
    s8 value;
} MenuState;

void sub_080532CC(Entity *actor)
{
    if ((u8)sub_080515D8(actor) == 0) {
        u8 *field = (u8 *)actor + 0x5C;
        u16 value = *(u16 *)field;
        u32 mask;
        u32 highMask;
        u32 unit;
        u32 packed;
        u32 reversed;
        u32 high;

        field -= 8;
        *field = value;
        packed = ((u32 *)actor)[4];
        mask = 0xFFFFFF;
        reversed = packed;
        reversed &= mask;
        reversed = ~((reversed) >> 8);
        reversed <<= 16;
        highMask = 0xFF000000;
        high = packed & highMask;
        reversed >>= 8;
        unit = 0x100;
        reversed += unit;
        high |= reversed;
        ((u32 *)actor)[4] = high;

        packed = ((u32 *)actor)[5];
        reversed = packed;
        reversed &= mask;
        reversed = ~(reversed >> 8);
        reversed <<= 16;
        high = packed & highMask;
        reversed >>= 8;
        reversed += unit;
        high |= reversed;
        ((u32 *)actor)[5] = high;
    }
}

void sub_08053324(Entity *actor)
{
    u8 *timer;
    u32 value;
    u8 remaining;

    actor->unk6 += 8;
    timer = (u8 *)actor + 0xD1;
    value = *timer;
    value--;
    *timer = value;
    remaining = value;
    if (remaining == 0) {
        if (((MenuState *)D_03004830)->value == 0x19) {
            D_03001648 = remaining;
            sub_08000CD8();
        }
        sub_0803EE6C(actor);
    }
}
