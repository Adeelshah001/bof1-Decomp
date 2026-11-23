extern void (* const D_080FD330[])(Entity *);
extern u8 gEntityPool[];
extern u8 D_03002130[];
extern const u8 D_0822F5B8[];
void *Entity_FindFreeSlot(void);
s32 sub_0803A8EC(void *);
void sub_0804D1D0(Entity *, u16, u16);
void sub_0804B9D4(Entity *);
void sub_0804D6B0(Entity *);
void sub_0804D844(Entity *, u16);
void sub_0804C240(Entity *actor);
void sub_0804C1E0(Entity *actor);
void sub_0804C120(Entity *actor);
void sub_0804C570(Entity *actor)
{
  Entity *new_var;
  const u8 *data = D_0822F5B8;
  u16 *new_var3;
  u32 low;
  u32 high;
  u16 *position;
  s32 zeroByte;
  s16 zeroHalf;
  int new_var2;
  u8 *field;
  low = data[8];
  high = data[9];
  zeroByte = high;
  low |= (zeroByte << 3) << 5;
  new_var3 = (u16 *) (((u8 *) actor) + 0xA6);
  new_var2 = 0;
  position = new_var3;
  zeroByte = new_var2;
  zeroHalf = new_var2;
  *position = low;
  new_var = actor;
  sub_0804D1D0(new_var, 0xFFD0, 0x80);
  field = ((u8 *) new_var) + 0x63;
  *field = 1;
  field -= 2;
  *field = 1;
  *((u16 *) (((u8 *) new_var) + 0xAA)) = zeroHalf;
  new_var->unk54 = zeroByte;
  sub_0804B9D4(new_var);
  new_var->unk64 = (u32) sub_0804D6B0;
  sub_0804D844(new_var, 0x1A0);
}

