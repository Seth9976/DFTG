// 函数名称: sub_4d7860
// 虚拟地址: 0x4d7860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4d7860(int32_t arg1, char* arg2, char** arg3, void* arg4, char* arg5, int32_t* arg6)
{
    // 第一条实际指令: char** var_c = arg3
    char** var_c = arg3
    char** result = sub_48a5e0(arg3, arg5)
    
    if (*(arg4 + 8) != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t ecx_2 = i * 0xf
            i += 1
            int32_t* eax_1 = *(arg4 + 4) + (ecx_2 << 2)
            
            if (i s>= *(arg4 + 8))
                i = 0xffffffff
            
            result = sub_4d72c0(eax_1, arg2, arg3, eax_1[3], eax_1, arg6)
    
    return result
}
