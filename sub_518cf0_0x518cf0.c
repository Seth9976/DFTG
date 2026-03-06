// 函数名称: sub_518cf0
// 虚拟地址: 0x518cf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_518cf0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* edi = data_1151ad0
    int32_t* result
    
    for (void* i = 0x70; i s< 0x7c; i += 4)
        result = i + edi
        
        if (*(i + edi) != 0)
            int32_t* eax_1 = sub_498440(0xc)
            eax_1[3] += 1
            int32_t* ecx = *eax_1
            
            if (ecx == 0)
                sub_4982d0(eax_1)
                ecx = *eax_1
            
            *eax_1 = *ecx
            *ecx = 0
            ecx[2] = 0
            *ecx = *result
            ecx[2] = arg1[1]
            result = arg1[1]
            
            if (result == 0)
                *arg1 = ecx
            else
                result[1] = ecx
            
            arg1[2] += 1
            edi = data_1151ad0
            arg1[1] = ecx
    
    if (*(edi + 0x80) != 0)
        int32_t* eax_6 = sub_498440(0xc)
        eax_6[3] += 1
        int32_t* ecx_2 = *eax_6
        
        if (ecx_2 == 0)
            sub_4982d0(eax_6)
            ecx_2 = *eax_6
        
        *eax_6 = *ecx_2
        *ecx_2 = 0
        ecx_2[2] = 0
        *ecx_2 = *(edi + 0x80)
        ecx_2[2] = arg1[1]
        result = arg1[1]
        
        if (result != 0)
            result[1] = ecx_2
            arg1[2] += 1
            arg1[1] = ecx_2
            return result
        
        arg1[2] += 1
        *arg1 = ecx_2
        arg1[1] = ecx_2
    
    return result
}
