// 函数名称: sub_4be900
// 虚拟地址: 0x4be900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4be900(char* arg1, char* arg2)
{
    // 第一条实际指令: char* result = arg1
    char* result = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = mulu.dp.d(0x80808081, zx.d(*arg1) * zx.d(*arg2) + 0x80)
    result.b = (edx u>> 7).b
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = mulu.dp.d(0x80808081, zx.d(arg1[1]) * zx.d(arg2[1]) + 0x80)
    result:1.b = (edx_2 u>> 7).b
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = mulu.dp.d(0x80808081, zx.d(arg1[2]) * zx.d(arg2[2]) + 0x80)
    result:2.b = (edx_4 u>> 7).b
    int32_t eax_6
    int32_t edx_9
    edx_9:eax_6 = mulu.dp.d(0x80808081, zx.d(arg1[3]) * zx.d(arg2[3]) + 0x80)
    result:3.b = (edx_9 u>> 7).b
    return result
}
