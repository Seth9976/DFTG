// 函数名称: sub_4c3340
// 虚拟地址: 0x4c3340
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4c3340()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_10
    char const* const var_c_1
    void* eax
    
    if (data_114e818 != 0)
        (*(*data_aca1ec + 0x10))()
        void* esi_1 = data_6c9b9c
        
        if (esi_1 != 0)
            void* edx_1 = nullptr
            
            while (true)
                if (edx_1 != 0)
                    edx_1 += 0x18
                else
                    edx_1 = esi_1
                
                void* ecx_2 = esi_1 + data_6c9ba0 * 0x18
                
                if (edx_1 u>= ecx_2)
                    break
                
                while (true)
                    int32_t eax_4 = *(edx_1 + 0x14)
                    
                    if ((eax_4 & 0xffff0000) != 0)
                        int32_t ecx_3 = data_6c9ba8
                        data_6c9ba8 = zx.d(eax_4.w)
                        *(edx_1 + 0x14) = ecx_3
                        data_6c9bac -= 1
                        esi_1 = data_6c9b9c
                        break
                    
                    edx_1 += 0x18
                    
                    if (edx_1 u>= ecx_2)
                        goto label_4c33a6
            
        label_4c33a6:
            data_6c9ba0 = 0
            data_6c9ba8 = 0
            
            if (esi_1 != 0)
                _aligned_free_base(esi_1)
            
            __builtin_memset(&data_6c9b9c, 0, 0x14)
            data_6c9bb4 = 0
        
        sub_4f93f0()
        sub_51b9f0()
        sub_4fcd90()
        eax = sub_4dbfb0()
        void* edi_1 = data_114e818
        
        if (edi_1 != 0)
            int32_t* edi_2 = *(edi_1 + 4)
            int32_t* i_2 = edi_2[1]
            
            if (i_2 != 0)
                int32_t* i
                
                do
                    i = *i_2
                    _aligned_free_base(i_2)
                    i_2 = i
                while (i != 0)
            
            edi_2[1] = 0
            edi_2[3] = 0
            int32_t* i_3 = edi_2[5]
            
            if (i_3 != 0)
                int32_t* i_1
                
                do
                    i_1 = *i_3
                    _aligned_free_base(i_3)
                    i_3 = i_1
                while (i_1 != 0)
            
            edi_2[5] = 0
            edi_2[7] = 0
            int32_t result = sub_4984f0(edi_2, 0x20)
            int32_t* edi_3 = data_114e834
            
            if (edi_3 != 0)
                void* esi_2 = nullptr
                int32_t* ecx_5
                
                while (true)
                    ecx_5 = data_114e838
                    void* edx_2
                    
                    if (esi_2 != 0)
                        edx_2 = *ecx_5
                        esi_2 += 0x64
                    else
                        esi_2 = *ecx_5
                        edx_2 = esi_2
                    
                    void* eax_7 = ecx_5[1] * 0x64 + edx_2
                    
                    if (esi_2 u>= eax_7)
                        break
                    
                    while ((*(esi_2 + 0x60) & 0xffff0000) == 0)
                        esi_2 += 0x64
                        
                        if (esi_2 u>= eax_7)
                            goto label_4c34f0
                    
                    (*(*edi_3 + 0x24))(esi_2)
                    edi_3 = data_114e834
                    *(esi_2 + 0x5a) = 0
                
            label_4c34f0:
                void* esi_3 = nullptr
                
                while (true)
                    void* edx_3
                    
                    if (esi_3 != 0)
                        edx_3 = *ecx_5
                        esi_3 += 0x64
                    else
                        esi_3 = *ecx_5
                        edx_3 = esi_3
                    
                    result = ecx_5[1] * 0x64 + edx_3
                    
                    if (esi_3 u>= result)
                        break
                    
                    while ((*(esi_3 + 0x60) & 0xffff0000) == 0)
                        esi_3 += 0x64
                        
                        if (esi_3 u>= result)
                            goto label_4c3530
                    
                    sub_4c5580(esi_3)
                    ecx_5 = data_114e838
            
        label_4c3530:
            int32_t* ecx_7 = data_114e818
            
            if (ecx_7 != 0)
                result = sub_4984f0(ecx_7, 0x38)
                data_114e818 = 0
            
            return result
        
        var_c_1 = "GetGameData"
        var_10 = 0x45
        var_14 = "d:\ax\trunk\ax2017\engine\game.h"
    else
        var_c_1 = "GameDispose"
        var_10 = 0x49
        var_14 = "d:\ax\trunk\ax2017\engine\game.cpp"
    
    sub_489550(eax, &data_5b2591, "gpGameData", var_14, var_10, var_c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
