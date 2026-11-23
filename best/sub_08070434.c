extern u16 D_0202DBD0[];
extern const u8 D_FFFFFF00[];
void sub_08074AA4(void *);
void sub_08070434(u8 *actor, u8 *target)
{
  u8 *new_var;
  u32 slot = actor[0x63];
  int new_var2;
  u32 offset;
  u32 direction;
  u32 data;
  u32 byteOffset;
  u32 index;
  s32 value;
  u16 *entry;
  offset = slot << 2;
  direction = *((u8 *) (direction + 0x3B));
  byteOffset = offset + 2;
  data = (u32) (actor + 0x68);
  *((u8 *) (data + byteOffset)) = direction;
  direction = actor[0x58];
  direction >>= 1;
  byteOffset = offset + 3;
 do { *((u8 *) (data + byteOffset)) = direction; new_var = (u8 *) (data + offset); new_var2 = 0xC; if ((*new_var) == new_var2) { u32 base; byteOffset = offset + 1; index = *((u8 *) (data + byteOffset)); base = (u32) D_0202DBD0; index <<= 1; base += 0x204; entry = (u16 *) (index + base); direction = (u32) target; value = (s32) D_FFFFFF00; { u16 current = *entry; current += value; *entry = current; } } } while (0);
  sub_08074AA4(actor);
}
