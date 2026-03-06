// 函数名称: sub_565a50
// 虚拟地址: 0x565a50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_565a50(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_24 = ebx
    int32_t result
    int32_t ecx
    int32_t edx
    int32_t ebx_1
    result, ebx_1, ecx, edx = __cpuid(1, 0)
    *(arg1 + 0x480c) = sub_5626d0
    *(arg1 + 0x4810) = sub_565710
    *(arg1 + 0x4814) = sub_565450
    int32_t result_1 = result
    int32_t var_10 = ebx_1
    int32_t var_c = ecx
    
    if ((edx & 0x4000000) != 0)
        *(arg1 + 0x480c) = sub_562c30
        *(arg1 + 0x4810) = sub_565820
        *(arg1 + 0x4814) = sub_565500
    
    return result
}
