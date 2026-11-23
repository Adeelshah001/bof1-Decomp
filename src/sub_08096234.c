void sub_080379D4(s32);
void sub_08098294(void *, void *);
void sub_080917EC(void *);
void sub_08038264(void *);
void sub_0803A8EC(void *);
void sub_08096CD4(void *);
void sub_0804E1A8(void *);
void sub_0804E1B4(void *);
void sub_0804E1C0(void *);
void sub_0807372C(s32);
typedef struct 
{
  u8 pad00[0x54];
  u16 timer : 16;
} HalfwordTimer;
typedef struct 
{
  u8 pad00[0x54];
  u8 timer : 8;
} ByteTimer;
void sub_0809590C(u8 *actor);
void sub_08096234(Entity *actor)
{
  ByteTimer *state = (ByteTimer *) actor;
  int new_var2;
  u16 new_var;
  sub_08038264(actor);
  if (!((--state->timer) & 0x80))
  {
    s32 offset = 0x50;
    if (actor->unk2A == 0x18E)
    {
      offset = 0x70;
    }
    new_var2 = offset + (new_var = actor->unk6);
    actor->unk2C = new_var2;
    sub_0803A8EC(actor);
    return;
  }
  sub_08098294(actor, (void *) actor->unk78);
  sub_08096CD4(actor);
}

void sub_0809692C(u8 *actor, u16 color);
void sub_08096AE8(u16 color);
