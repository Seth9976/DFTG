// 函数名称: sub_546ff0
// 虚拟地址: 0x546ff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_546ff0(int32_t arg1 @ xmm0, int32_t arg2 @ xmm1)
{
    // 第一条实际指令: int32_t* eax = sub_4f9600(data_1151b48)
    int32_t* eax = sub_4f9600(data_1151b48)
    int32_t* ecx_1 = *eax
    eax[0xb] = arg1
    eax[0xf] = arg2
    
    if (ecx_1[1] == 0x18)
        void* eax_1 = sub_4981f0(ecx_1)
        int32_t esi_1 = 0
        
        if (*(eax_1 + 0x28) s<= 0)
        label_547063:
            esi_1 = 0xffffffff
        else
            int32_t* edi_1 = nullptr
            
            while (_strncmp(*(edi_1 + *(eax_1 + 0x20)), "world locator", 0xd) != 0)
                esi_1 += 1
                edi_1 = &edi_1[6]
                
                if (esi_1 s>= *(eax_1 + 0x28))
                    goto label_547063
        
        int32_t* edi_2 = eax
        eax = edi_2[0x24]
        edi_2[0x1e] = esi_1
        data_1151b4c = eax
        int32_t* ecx_2 = *edi_2
        
        if (ecx_2[1] == 0x18)
            char** eax_4 = sub_4981f0(ecx_2)
            char* edx
            
            if (eax_4[2] s<= 0)
                edx = nullptr
            else
                eax_4 = *eax_4
                edx = *eax_4
            
            sub_4fa5f0(eax_4, edx, edi_2, 1f, 0)
            void* result = sub_546a90(edi_2, 1)
            data_1151b50 = 0
            return result
    
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2ec, "FlanimGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
