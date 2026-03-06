// 函数名称: sub_4565d0
// 虚拟地址: 0x4565d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4565d0(int32_t arg1, int64_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t var_c = eax_1
    int32_t var_150
    char const* const ecx
    
    if (*arg4 == 1)
        eax_1 = sub_453be0(arg4)
        
        if (eax_1 != 0)
            eax_1 = sub_453650(arg2) - 4
            
            if (eax_1 u<= 0x17)
                eax_1 = zx.d(lookup_table_456b24[eax_1])
                bool cond:0_1
                
                switch (eax_1)
                    case 0
                        eax_1 = arg4[4] - 3
                        
                        switch (eax_1)
                            case 0
                                *arg3 = 4
                                @__security_check_cookie@4(var_c ^ &__saved_ebp)
                                return arg3
                            case 1, 2, 3
                                *arg3 = 5
                                @__security_check_cookie@4(var_c ^ &__saved_ebp)
                                return arg3
                            case 4
                                *arg3 = 3
                                @__security_check_cookie@4(var_c ^ &__saved_ebp)
                                return arg3
                    case 1
                        int32_t eax_3 = arg4[4]
                        
                        if (eax_3 == 7)
                            int32_t eax_6 = sub_45e3d0(arg4, 0)
                            
                            if (eax_6 == 7)
                                goto label_4569e4
                            
                            sub_4565a0(arg3, eax_6)
                            @__security_check_cookie@4(var_c ^ &__saved_ebp)
                            return arg3
                        
                        if (eax_3 - 8 u<= 5 && *(arg4 + 0x22) == 0)
                            goto label_456670
                        
                    label_4569e4:
                        *arg3 = 0
                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                        return arg3
                    case 2
                        int32_t eax_8 = arg4[4]
                        
                        if (eax_8 == 9)
                            *arg3 = 1
                            arg3[1] = 0xf
                            @__security_check_cookie@4(var_c ^ &__saved_ebp)
                            return arg3
                        
                        if (eax_8 != 0xf)
                            goto label_4569e4
                        
                        *arg3 = 7
                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                        return arg3
                    case 3
                        int32_t eax_11 = arg4[4]
                        
                        if (eax_11 == 5)
                            *arg3 = 1
                            arg3[1] = 0xa
                            @__security_check_cookie@4(var_c ^ &__saved_ebp)
                            return arg3
                        
                        if (eax_11 != 0xa)
                            goto label_4569e4
                        
                    label_456718:
                        *arg3 = 1
                        arg3[1] = 5
                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                        return arg3
                    case 4
                        int32_t eax_14 = arg4[4]
                        
                        if (eax_14 == 6)
                            *arg3 = 1
                            arg3[1] = 0xb
                            @__security_check_cookie@4(var_c ^ &__saved_ebp)
                            return arg3
                        
                        if (eax_14 != 0xb)
                            goto label_4569e4
                        
                    label_456769:
                        *arg3 = 1
                        arg3[1] = 6
                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                        return arg3
                    case 5
                        int32_t* eax_18 = arg4[4]
                        
                        if (eax_18 == 4)
                            *arg3 = 1
                            arg3[1] = 0xc
                            @__security_check_cookie@4(var_c ^ &__saved_ebp)
                            return arg3
                        
                        if (eax_18 == 0xc)
                            int32_t var_150_1
                            char const* const var_14c_4
                            char* ecx_21
                            
                            if (*arg4 != 1)
                                var_14c_4 = "DieGetColor"
                                var_150_1 = 0x3d3f
                                ecx_21 = "die.type == ROLLGFX_DIE"
                            label_456ade:
                                sub_489550(eax_18, &data_5b2591, ecx_21, 
                                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_150_1, 
                                    var_14c_4)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            int32_t ecx_22 = arg2[0x55].d
                            int32_t eax_20 = arg4[2] - 1
                            int32_t* var_12c_1
                            int32_t* edi_1
                            
                            if (ecx_22 == 0)
                                edi_1 = nullptr
                                var_12c_1 = nullptr
                            else
                                int32_t* eax_21 = sub_452cc0(ecx_22)
                                edi_1 = eax_21
                                var_12c_1 = eax_21
                            
                            int32_t* var_130 = edi_1
                            eax_18 = Unlock(&var_130)
                            int32_t* esi_1 = var_130
                            int32_t* edi_3
                            
                            if (edi_1 != esi_1)
                                while (true)
                                    if (edi_1 == 0)
                                        var_14c_4 = "Tiles::TileIt::operator *"
                                        var_150_1 = 0x2ac
                                        ecx_21 = &data_5e3f90
                                        goto label_456ade
                                    
                                    var_130 = sub_4616b0(edi_1)
                                    
                                    if (sub_45b410(edi_1) s< sub_45b4c0(var_12c_1) && eax_20 == var_130)
                                        edi_3 = var_12c_1
                                        break
                                    
                                    eax_18 = var_12c_1
                                    int32_t ecx_26 = eax_18[0x10]
                                    
                                    if (ecx_26 != 0)
                                        eax_18 = sub_452cc0(ecx_26)
                                        edi_1 = eax_18
                                        var_12c_1 = eax_18
                                    else
                                        edi_1 = nullptr
                                        var_12c_1 = nullptr
                                    
                                    if (edi_1 == esi_1)
                                        goto label_4568c3
                                
                                goto label_456959
                            
                        label_4568c3:
                            int32_t var_128[0x47]
                            int32_t eax_26 = sub_45ef30(arg2, &var_128)
                            void* edx_5 = nullptr
                            void* var_12c_2 = nullptr
                            
                            if (eax_26 s> 0)
                                void* eax_27 = eax_26 - 1
                                var_130 = eax_27
                                
                                while (true)
                                    if (arg4[2] != 7)
                                        eax_27 = edx_5
                                    
                                    edi_3 = var_128[eax_27]
                                    
                                    if (sub_45b410(edi_3) s< sub_45b4c0(edi_3))
                                        break
                                    
                                    edx_5 = var_12c_2 + 1
                                    eax_27 = var_130 - 1
                                    var_12c_2 = edx_5
                                    var_130 = eax_27
                                    
                                    if (edx_5 s>= eax_26)
                                        *arg3 = 0
                                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                                        return arg3
                                
                            label_456959:
                                
                                if (edi_3 != 0)
                                    *arg3 = 1
                                    arg3[1] = 4
                                    arg3[2] = edi_3
                                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                                    return arg3
                        
                        goto label_4569e4
                    case 6
                        if (arg4[4] == 0xd)
                            int32_t* eax_34 = sub_45f000(arg2, arg4)
                            
                            if (eax_34 != 0)
                                arg3[2] = eax_34
                                *arg3 = 6
                                @__security_check_cookie@4(var_c ^ &__saved_ebp)
                                return arg3
                        
                        goto label_4569e4
                    case 7
                        *arg3 = 2
                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                        return arg3
                    case 8
                        int32_t eax_36 = arg4[4]
                        
                        if (eax_36 == 3)
                        label_456670:
                            *arg3 = 1
                            arg3[1] = 7
                            @__security_check_cookie@4(var_c ^ &__saved_ebp)
                            return arg3
                        
                        cond:0_1 = eax_36 == 7
                    label_4569e2:
                        
                        if (not(cond:0_1))
                            goto label_4569e4
                        
                        *arg3 = 1
                        arg3[1] = 3
                        @__security_check_cookie@4(var_c ^ &__saved_ebp)
                        return arg3
                    case 9
                        int32_t edx_1 = arg4[4]
                        
                        if (sub_45d190(3) == 0)
                            if (edx_1 == 3)
                                goto label_456718
                            
                            cond:0_1 = edx_1 == 5
                            goto label_4569e2
                        
                        if (edx_1 == 3)
                            goto label_456769
                        
                        cond:0_1 = edx_1 == 6
                        goto label_4569e2
            
            char const* const var_14c_6 = "CalcAutoTarget"
            var_150 = 0x1050
            ecx = "Halt"
        else
            char const* const var_14c_2 = "CalcAutoTarget"
            var_150 = 0xfc1
            ecx = "CanDragDie(gfx)"
    else
        char const* const var_14c_1 = "CalcAutoTarget"
        var_150 = 0xfc0
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_150, 
        "CalcAutoTarget")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
