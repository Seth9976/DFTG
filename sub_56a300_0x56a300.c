// 函数名称: sub_56a300
// 虚拟地址: 0x56a300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56a300(void* arg1, char* arg2)
{
    // 第一条实际指令: uint32_t esi = zx.d(sub_561430(arg1))
    uint32_t esi = zx.d(sub_561430(arg1))
    *arg2 = ((esi u>> 0xa & 0x1f) * 0xff s/ 0x1f).b
    arg2[1] = ((esi u>> 5 & 0x1f) * 0xff s/ 0x1f).b
    char result = ((esi & 0x1f) * 0xff s/ 0x1f).b
    arg2[2] = result
    return result
}
