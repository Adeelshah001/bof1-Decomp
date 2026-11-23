void sub_080379D4(s32);
void sub_08037FC4(Entity *, u16);
void sub_08091B58(Entity *);
void sub_08095A98(Entity *);
void sub_08095AC0(Entity *);
u8 sub_08096D24(Entity *, u16, u16);
void sub_08091AF0(Entity *entity)
{
  Entity *saved = entity;
  u8 *data = (u8 *) saved;
  u8 *state = data + 0x4C;
  u32 mode;
  if ((*state) == 1)
  {
    sub_08091B58(entity);
  }
  else
    if ((*state) == 2)
  {
    sub_08095AC0(saved);
  }
  else
  {
    sub_080379D4(5);
    sub_08037FC4(saved, 0);
    mode = 0;
    *((u16 *) (data + 0x38)) = 0x60;
    saved->unk54 = mode;
    ++(*state);
    sub_08096D24(saved, 0x10, 0x20);
    mode = data[0x61];
    mode &= 0xF0;
    mode <<= 8;
    *((u16 *) (data + 0x44)) = mode;
    sub_08095A98(saved);
  }
}

