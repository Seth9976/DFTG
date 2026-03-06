// 函数名称: sub_453400
// 虚拟地址: 0x453400
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_453400(void* arg1)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t i
    void* eax
    
    for (i = *(arg1 + 0x2a8); i != 0; i = *(eax + 0x10))
        eax = sub_452de0(i)
        int32_t ecx_1 = *(eax + 8)
        
        if (ecx_1 == 0 || ecx_1 == 2)
            ecx_1.b = 0
        else
            int32_t* eax_1 = *eax
            int32_t eax_2
            
            if (ecx_1 != 3)
                if (ecx_1 == 4)
                label_453432:
                    eax_2 = eax_1[6]
                    goto label_453435
                
                int32_t eax_6 = eax_1[0xc]
                
                if (eax_6 == 1 || eax_6 == 0)
                    ecx_1.b = 0
                else
                    ecx_1.b = 1
            else
                if (*eax_1 == 1)
                    goto label_453432
                
                eax_2 = eax_1[0xc]
            label_453435:
                
                if (eax_2 == 1 || eax_2 == 0)
                    ecx_1.b = 0
                else
                    ecx_1.b = 1
        
        int32_t eax_3 = edi + 1
        
        if (ecx_1.b == 0)
            eax_3 = edi
        
        edi = eax_3
    
    if (sub_453300(i, 4, arg1, 0x40, nullptr) != 0)
        edi *= 2
    
    int32_t i_1 = *(arg1 + 0x2c4)
    int32_t esi = 0
    
    for (; i_1 != 0; i_1 = *(sub_452d50(i_1) + 0x20))
        esi += 1
    
    i_1.b = edi s> esi
    return i_1
}
