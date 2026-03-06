// 函数名称: sub_4d64f0
// 虚拟地址: 0x4d64f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d64f0(void* arg1, char* arg2)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t* i = *(arg1 + 4)
        
        while (i != 0)
            int32_t* result = *i
            char* const ecx = &data_5b2591
            i = i[1]
            char* eax_1 = *result
            
            if (eax_1 != 0)
                ecx = eax_1
            
            if (__stricmp(ecx, arg2) == 0)
                return result
    
    return 0
}
