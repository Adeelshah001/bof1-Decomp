extern const u8 D_0822B3B8[];
Entity *sub_08020AF0(s32, s32);
void sub_080536F4(Entity *actor)
{
  Entity *child = sub_08020AF0(0x11, 0);
  if (child != NULL)
  {
    const u8 *data = D_0822B3B8;
    u32 index;
    u32 low;
    u32 high;
    if (low)
    {
      actor = (Entity *) (((u8 *) actor) + 0xCC);
      index = *((u8 *) actor);
      high = index + 1;
      high += (u32) data;
      low = *((const u8 *) high);
      index += 2;
      index += (u32) data;
      high = *((const u8 *) index);
      low |= high << 8;
      *((u16 *) (((u8 *) child) + 2)) = low;
      index = *((u8 *) actor);
      high = index + 3;
      high += (u32) data;
      low = *((const u8 *) high);
      index += 4;
      index += (u32) data;
      high = *((const u8 *) index);
      low |= high << 8;
      low -= 8;
      child->unk6 = low;
      index = *((u8 *) actor);
      high = index + 3;
      high += (u32) data;
      low = *((const u8 *) high);
      index += 4;
      index += (u32) data;
      high = *((const u8 *) index);
      low |= high << 8;
      low += 0x10;
      child->unk2C = low;
      *((u8 *) actor) += 5;
    }
    else
    {
      actor = (Entity *) (((u8 *) actor) + 0xCC);
      index = *((u8 *) actor);
      high = index + 1;
      high += (u32) data;
      low = *((const u8 *) high);
      index += 2;
      index += (u32) data;
      high = *((const u8 *) index);
      low |= high << 8;
      *((u16 *) (((u8 *) child) + 2)) = low;
      index = *((u8 *) actor);
      high = index + 3;
      high += (u32) data;
      low = *((const u8 *) high);
      index += 4;
      index += (u32) data;
      high = *((const u8 *) index);
      low |= high << 8;
      low -= 8;
      child->unk6 = low;
      index = *((u8 *) actor);
      high = index + 3;
      high += (u32) data;
      low = *((const u8 *) high);
      index += 4;
      index += (u32) data;
      high = *((const u8 *) index);
      low |= high << 8;
      low += 0x10;
      child->unk2C = low;
      *((u8 *) actor) += 5;
    }
  }
}

