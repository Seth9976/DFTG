// 函数名称: sub_4fa590
// 虚拟地址: 0x4fa590
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4fa590(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    char* var_c = arg2
    int32_t i = 0
    int32_t* var_8 = eax
    
    if (eax[2] s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* result = *eax + edi_1
            
            if (__stricmp(arg2, *result) == 0)
                return result
            
            eax = var_8
            i += 1
            arg2 = var_c
            edi_1 += 0x18
        while (i s< eax[2])
    
    return 0
}
