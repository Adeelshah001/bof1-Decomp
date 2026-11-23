extern u16 D_03001864;
extern u8 D_03004F50[];
void sub_0803A8EC(void *);
void sub_0803800C(void *, s32, s32);
void sub_0807B56C(Entity *);
void sub_08083BB4(Entity *);
void sub_0807B71C(Entity *);
void sub_0807B760(Entity *);
s32 sub_080936A0(Entity *);
void sub_0807B578(Entity *actor, u8 mode);
void sub_0807B51C(Entity *actor);
void sub_0807B674(Entity *actor)
{
  u8 *state;
  u8 *field;
  u8 *delay;
  u8 **new_var;
  u16 value;
  if (((*((u16 *) (((u8 *) actor) + 0x44))) >> 8) == 0)
  {
    sub_0807B760(actor);
  }
  sub_08083BB4(actor);
  delay = ((u8 *) actor) + 0xD8;
  *delay = 0x19;
  state = D_03004F50;
  field = state + 0x74;
  new_var = &field;
  value = *((u16 *) (*new_var));
  field -= 0x34;
  *((u16 *) (*new_var)) = value;
 do { if (sub_080936A0(actor) != 0) { sub_0807B71C(actor); return; } } while (0);
  delay = state + 0x5D;
  *delay = 0;
  sub_0807B578(actor, 0xFF);
}
