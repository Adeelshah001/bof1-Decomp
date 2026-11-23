void sub_0809A0B0(Entity *);
void sub_08038128(Entity *, u32, s32, s32);
void sub_08038264(Entity *);
void sub_08038178(Entity *, u32);
void sub_0803EE6C(Entity *);
void sub_0809A540(Entity *);
void sub_08037FC4(Entity *, u16);
void sub_0809A4B8(Entity *entity);
void sub_0809A4F8(Entity *entity);
void sub_08099444(Entity *entity);
void sub_08099220(Entity *entity)
{
  Entity *saved = entity;
  u32 new_var2;
  u8 *timer = &entity->unk54;
  u32 zero = 0;
  u16 *new_var;
  u8 *data;
  u32 phase;
  *timer = zero;
  *(new_var = (u16 *) (((u8 *) saved) + 0x38)) = 0xE0;
  if (1)
  {
  }
  sub_08038178(saved, saved->unk78);
  data = (u8 *) saved;
  phase = (unsigned long) (data[0x61] += 3);
  new_var2 = phase << 8;
  *((u16 *) (data + 0x44)) = new_var2;
  *((u16 *) (data + 0x48)) = zero;
  data[0x4C]++;
  sub_08037FC4(saved, 2);
}

