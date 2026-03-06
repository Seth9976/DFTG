// 函数名称: sub_4a9b60
// 虚拟地址: 0x4a9b60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a9b60(void* arg1, char** arg2)
{
    // 第一条实际指令: *arg2 = sub_4a9af0(arg1)
    *arg2 = sub_4a9af0(arg1)
    char* eax_1
    
    if (*(arg1 + 0x112c) != 0)
        int32_t* eax_2 = sub_498ef0(arg1)
        eax_1 = sub_4f0df0(eax_2, eax_2, &data_6218dc, 0x6e)
    else
        eax_1 = nullptr
    
    char* eax_3 = *arg2
    
    if (eax_3 != 0 && *eax_3 != 0)
        int32_t* eax_4 = sub_498ef0(arg1)
        int32_t* eax_5 = sub_4f0e70(eax_4, eax_4, &data_6218dc, data_126cc78, 0x68)
        
        if (eax_5 != 0)
            int32_t i = 0
            
            if (eax_5[2] s> 0)
                char** edi_1 = nullptr
                
                do
                    if (__stricmp(*(edi_1 + *eax_5), eax_3) == 0)
                        if (eax_1 != 0 && *eax_1 != 0 && __stricmp(*arg2, eax_1) != 0)
                            return 2
                        
                        return 1
                    
                    i += 1
                    edi_1 = &edi_1[8]
                while (i s< eax_5[2])
    
    return 0
}
