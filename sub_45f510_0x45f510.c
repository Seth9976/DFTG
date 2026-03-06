// 函数名称: sub_45f510
// 虚拟地址: 0x45f510
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45f510(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* edx = arg3
    int32_t* edx = arg3
    int32_t ecx = arg2
    int32_t* var_c = edx
    int32_t var_30
    char const* const var_2c
    char* ecx_1
    
    if (ecx == 4 || ecx == 5)
        int32_t eax = edx[ecx + 0xa7]
        int32_t result = 0
        int32_t result_1 = 0
        int32_t* i_1
        
        if (eax == 0)
            i_1 = nullptr
        else
            ecx = arg2
            i_1 = sub_452cc0(eax)
            edx = var_c
        
        int32_t var_10
        arg1 = Unlock(&var_10)
        
        if (i_1 == var_10)
        label_45f5c8:
            int32_t esi_1 = 0
            int32_t eax_4
            int32_t edx_2
            edx_2:eax_4 = sx.q(result)
            int32_t eax_6 = (eax_4 - edx_2) s>> 1
            var_10 = eax_6
            
            if (eax_6 s> 0)
                void* edx_3 = &arg4[result - 1]
                
                do
                    int32_t ecx_5 = arg4[esi_1]
                    edx_3 -= 4
                    arg4[esi_1] = *(edx_3 + 4)
                    esi_1 += 1
                    *(edx_3 + 4) = ecx_5
                while (esi_1 s< eax_6)
                
                result = result_1
            
            if (result s> 0)
                int32_t esi_2 = 0
                int32_t eax_8
                eax_8.b = arg2 != 4
                
                for (int32_t i = *((eax_8 << 2) + 0x2c8 + var_c); i != 0; i = *(sub_452d50(i) + 0x20))
                    esi_2 += 1
                
                *arg4 -= esi_2
            
            if (*arg4 s<= 0)
                return 0
            
            return result
        
        while (i_1 != 0)
            int32_t eax_2 = i_1[0x11]
            int32_t edx_1 = *edx
            void* ecx_3 = data_632804
            
            if (ecx != 5)
                arg1 = sub_44ac90(eax_2, edx_1, ecx_3, eax_2, 0, 1)
            else
                arg1 = sub_44bae0(eax_2, edx_1, ecx_3, eax_2, 0, 1)
            
            arg4[result] = arg1
            int32_t ecx_4 = i_1[0x10]
            result += 1
            result_1 = result
            
            if (ecx_4 != 0)
                arg1 = sub_452cc0(ecx_4)
                i_1 = arg1
            else
                i_1 = nullptr
            
            ecx = arg2
            edx = var_c
            
            if (i_1 == var_10)
                goto label_45f5c8
        
        var_2c = "Tiles::TileIt::operator *"
        var_30 = 0x2ac
        ecx_1 = &data_5e3f90
    else
        var_2c = "ComputeConstructionRemainingCosts"
        var_30 = 0x3837
        ecx_1 = "where == TW_DEVELOPMENTS || where == TW_SETTLEMENTS"
    
    sub_489550(arg1, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_30, 
        var_2c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
