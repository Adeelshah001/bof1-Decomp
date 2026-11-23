void sub_08037FC4(void *, u16);
void sub_08053378(Entity *);
s32 sub_080515D8(Entity *);
void sub_08000CD8(void);
void sub_0803EE6C(Entity *);
extern u16 D_03001648;
extern u16 D_020291C0[];
typedef struct 
{
  u16 color;
  u16 padding[3];
} ColorEntry;
extern ColorEntry *D_03001650;
typedef struct 
{
  u8 padding[0x2B];
  s8 value;
} MenuState;
void sub_080532CC(Entity *actor)
{
  u8 **new_var;
  if (((u8) sub_080515D8(actor)) == 0)
  {
    u8 *field = ((u8 *) actor) + 0x5C;
    u16 value = *((u16 *) field);
    u32 mask;
    u32 highMask;
    u32 unit;
    u32 packed;
    u32 reversed;
    field -= 8;
    new_var = &field;
    *(*new_var) = value;
    packed = ((u32 *) actor)[4];
    mask = 0xFFFFFF;
    reversed = packed;
    reversed &= mask;
    reversed = ~(reversed >> 8);
    reversed <<= 16;
    highMask = 0xFF000000;
    packed &= highMask;
    reversed >>= 8;
    unit = 0x100;
    reversed += unit;
    packed |= reversed;
    ((u32 *) actor)[4] = packed;
    packed = ((u32 *) actor)[5];
    reversed = packed;
    reversed &= mask;
    reversed = ~(reversed >> 8);
    reversed <<= 16;
    packed &= highMask;
    reversed >>= 8;
    reversed += unit;
    packed |= reversed;
    ((u32 *) actor)[5] = packed;
  }
}

void sub_08053324(Entity *actor);
void sub_08052A34(Entity *actor);
