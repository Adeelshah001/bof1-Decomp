typedef struct 
{
  u8 pad00[2];
  u16 x;
  u8 pad04[2];
  u16 y;
} MapCoordinates;
extern MapCoordinates D_030023E0;
void sub_0803A508(Entity *);
void sub_0804D430(Entity *);
void sub_0804D724(Entity *);
void sub_0804D784(Entity *, s32, s32);
void sub_0804B96C(Entity *actor, u16 y)
{
  u32 x = D_030023E0.x;
  u16 new_var;
  int new_var2;
  u32 targetY;
  u8 zero;
  x += 0xFFC8;
  zero = 0;
  *((u16 *) (((u8 *) actor) + 2)) = x;
 do { targetY = y; new_var = D_030023E0.y; targetY += new_var; actor->unk6 = targetY; actor->unk2C = targetY; } while (0);
  sub_0803A508(actor);
  actor->unk64 = (u32) sub_0804D430;
  actor->unk54 = zero;
  sub_0804D784(actor, 1, 0);
  new_var2 = 0x61;
  ((u8 *) actor)[new_var2] = 1;
  actor->unk1C = 0x1A0;
  actor->unk2A = 0x7C;
  actor->unk41 = 0x34;
  sub_0804D724(actor);
}
