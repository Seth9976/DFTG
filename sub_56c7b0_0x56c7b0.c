// 函数名称: sub_56c7b0
// 虚拟地址: 0x56c7b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56c7b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    void* esi = arg1
    char* edi = nullptr
    char* eax = *(esi + 0xa8)
    
    if (eax u< *(esi + 0xac))
        ebx.b = *eax
        *(esi + 0xa8) = &eax[1]
        goto label_56c7f4
    
    if (*(esi + 0x20) == 0)
    label_56c7f2:
        ebx.b = 0
        goto label_56c7f4
    
    while (true)
        sub_561250(arg1)
        char* eax_2 = *(esi + 0xa8)
        ebx.b = *eax_2
        *(esi + 0xa8) = &eax_2[1]
    label_56c7f4:
        
        if (*(esi + 0x10) == 0)
        label_56c819:
            
            if (*(esi + 0xa8) u>= *(esi + 0xac))
                goto label_56c8c4
        else if ((*(esi + 0x18))(*(esi + 0x1c)) != 0)
            if (*(esi + 0x20) == 0)
                goto label_56c8c4
            
            goto label_56c819
        
        if (ebx.b == 0xa)
            goto label_56c8c4
        
        edi[arg2] = ebx.b
        edi = &edi[1]
        
        if (edi == 0x3ff)
            break
        
        char* eax_8 = *(esi + 0xa8)
        
        if (eax_8 u< *(esi + 0xac))
            ebx.b = *eax_8
            *(esi + 0xa8) = &eax_8[1]
            goto label_56c7f4
        
        if (*(esi + 0x20) == 0)
            goto label_56c7f2
        
        arg1 = esi
    
    label_56c863:
    char* eax_12
    int32_t ecx
    
    if (*(esi + 0x10) == 0)
    label_56c88c:
        eax_12 = *(esi + 0xa8)
        ecx = *(esi + 0xac)
        
        if (eax_12 u< ecx)
            goto label_56c89c
    else if ((*(esi + 0x18))(*(esi + 0x1c)) == 0)
        eax_12 = *(esi + 0xa8)
        ecx = *(esi + 0xac)
    label_56c89c:
        
        if (eax_12 u< ecx)
            goto label_56c8b3
        
        if (*(esi + 0x20) != 0)
            sub_561250(esi)
            eax_12 = *(esi + 0xa8)
        label_56c8b3:
            ecx.b = *eax_12
            *(esi + 0xa8) = &eax_12[1]
    else if (*(esi + 0x20) != 0)
        goto label_56c88c
    label_56c8c4:
    edi[arg2] = 0
    return arg2
}
