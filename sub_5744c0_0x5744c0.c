// 函数名称: sub_5744c0
// 虚拟地址: 0x5744c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_5744c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* edx = *arg1
    arg1[2] = *(edx + 0x10)
    arg1[3] = *(edx + 0x14)
    arg1[4] = *(edx + 0x18)
    arg1[5] = *(edx + 0x1c)
    int32_t* edx_1 = arg1[6]
    
    if (edx_1 != 0)
        int32_t* ecx = *(*arg1 + 0x20)
        *edx_1 = *ecx
        edx_1[1] = ecx[1]
        edx_1[2] = ecx[2]
        edx_1[3] = ecx[3]
    
    int32_t* eax_13 = *arg1
    char* edi = eax_13[3]
    
    if (edi != 0)
        void* ecx_1 = arg1[1]
        int32_t ebx_1 = *eax_13
        int32_t* eax_12 = *(ecx_1 + 4)
        
        if (ebx_1 == 0xffffffff)
            eax_13 = nullptr
        else
            int32_t ecx_2 = eax_12[0xd]
            
            if (ecx_2 != 0)
                eax_13 = sub_571ef0(eax_12, ebx_1, ecx_2, edi)
            
            if (ecx_2 == 0 || eax_13 == 0)
                void* eax_14 = *eax_12
                int32_t ecx_3 = *(eax_14 + 0x38)
                
                if (ecx_3 != 0)
                    eax_13 = sub_571ef0(eax_14, ebx_1, ecx_3, edi)
                
                if (ecx_3 == 0 || eax_13 == 0)
                    ecx_1 = arg1[1]
                    eax_13 = nullptr
                else
                    ecx_1 = arg1[1]
            else
                ecx_1 = arg1[1]
        
        arg1[7] = 0
        
        if (eax_13 != 0)
            arg1[7] = eax_13
            eax_13 = *(*(ecx_1 + 4) + 0x48)
            arg1[9] = 0
            arg1[0xb] = eax_13
    else if (arg1[7] != edi)
        void* eax_9 = arg1[1]
        arg1[7] = edi
        int32_t eax_11 = *(*(eax_9 + 4) + 0x48)
        arg1[9] = edi
        arg1[0xb] = eax_11
        return eax_11
    
    return eax_13
}
