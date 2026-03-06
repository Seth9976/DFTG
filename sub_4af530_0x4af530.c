// 函数名称: sub_4af530
// 虚拟地址: 0x4af530
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4af530(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t* eax_1 = sub_498ef0(arg1)
    char* edi = *arg2
    int32_t* ebx = eax_1
    char* const esi_1 = &data_5b2591
    char* const edx = &data_5b2591
    char* const ecx = &data_5b2591
    
    if (edi != 0)
        edx = edi
    
    int32_t eax_3
    
    while (true)
        eax_1.b = *edx
        char temp0_1 = *ecx
        bool c_1 = eax_1.b u< temp0_1
        
        if (eax_1.b == temp0_1)
            if (eax_1.b == 0)
                eax_3 = 0
                break
            
            eax_1.b = edx[1]
            char temp1_1 = ecx[1]
            c_1 = eax_1.b u< temp1_1
            
            if (eax_1.b == temp1_1)
                edx = &edx[2]
                ecx = &ecx[2]
                
                if (eax_1.b != 0)
                    continue
                
                eax_3 = 0
                break
        
        eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
        break
    
    if (eax_3 == 0)
        return sub_4f0b40(sub_48a5e0(arg1 + 0x1134, &data_5b2591), ebx, &data_6218dc, 0x6e)
    
    if (edi != 0)
        esi_1 = edi
    
    char* const var_18 = esi_1
    return sub_4f0a90(eax_3, ebx, &data_6218dc, 0x6e)
}
