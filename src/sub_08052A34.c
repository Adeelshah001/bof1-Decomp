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

        field -= 8;
        *field = value;
        packed = ((u32 *)actor)[4];
        mask = 0xFFFFFF;
        reversed = packed;
        reversed &= mask;
        reversed = ~((reversed) >> 8);
        reversed <<= 16;
        highMask = 0xFF000000;
        packed &= highMask;
        reversed >>= 8;
        unit = 0x100;
        reversed += unit;
        packed |= reversed;
        ((u32 *)actor)[4] = packed;

        packed = ((u32 *)actor)[5];
        reversed = packed;
        reversed &= mask;
        reversed = ~(reversed >> 8);
        reversed <<= 16;
        packed &= highMask;
        reversed >>= 8;
        reversed += unit;
        packed |= reversed;
        ((u32 *)actor)[5] = packed;
    }
}

void sub_08053324(Entity *actor)
{
    u8 *timer;
    u32 remaining;

    actor->unk6 += 8;
    timer = (u8 *)actor + 0xD1;
    remaining = *timer - 1;
    *timer = remaining;
    remaining = (u8)remaining;
    if (remaining == 0) {
        if (((MenuState *)D_03004830)->value == 0x19) {
            D_03001648 = remaining;
            sub_08000CD8();
        }
        sub_0803EE6C(actor);
    }
}

void sub_08052A34(Entity *actor)
{
    u32 remaining = actor->unk54 - 1;
    actor->unk54 = remaining;
    if ((u8)remaining == 0) {
        ColorEntry *out;
        u16 *colors;
        u16 i;
        u32 mask;

        actor->unk54 = 8;
        out = D_03001650;
        colors = D_020291C0;
        i = colors[0];
        colors[0] = colors[1];
        colors[1] = colors[2];
        colors[2] = colors[3];
        colors[3] = i;
        i = 0;
        mask = 3;
        do {
            out[i].color = colors[i & mask];
            i++;
        } while (i < 0x80);
    }
}
