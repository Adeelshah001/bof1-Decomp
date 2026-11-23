extern const u16 D_08152A38[];
void sub_08037FC4(u8 *actor, s32 offset);
void sub_08091098(u8 *actor)
{
  u8 *obj = actor;
  u16 *new_var2;
  u8 *counter;
  u8 *new_var;
  u8 *frame;
  u16 *value;
  const u16 *thresholds;
  u8 *previous;
  u16 current;
  u16 index;
  u8 kind;
  u16 start;
  actor += 0x6C;
  index = 0;
  *actor = index;
  actor -= 0x30;
  kind = *actor;
  start = kind;
  if (start != 0x1C)
  {
    start = 3;
  }
  else
  {
    start = 0;
  }
  index = start;
  value = (u16 *) (obj + 0xF6);
  current = *value;
  frame = obj + 0x6C;
  previous = obj + 0x6D;
  if (current != 0)
  {
    thresholds = D_08152A38;
    if (current < (*((const u16 *) ((index * 2) + ((u32) thresholds)))))
    {
      counter = frame;
      new_var2 = value;
      do
      {
        ++(*counter);
        ++index;
        start = *new_var2;
        current = start;
      }
      while ((current != 0) && (current < (*((const u16 *) ((index * 2) + ((u32) thresholds))))));
    }
  }
  index = *frame;
  new_var = &(*previous);
  if ((*new_var) != index)
  {
    sub_08037FC4(obj, index * 2);
    *previous = *frame;
  }
}

