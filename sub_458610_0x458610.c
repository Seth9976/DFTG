// 函数名称: sub_458610
// 虚拟地址: 0x458610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_458610(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x14)
    int32_t edx = *(arg3 + 0x14)
    void* eax = *(arg3 + 8)
    void* var_c = eax
    int32_t var_80
    char const* const ecx
    
    if (edx != 0)
        uint32_t ecx_1 = zx.d(edx.w)
        
        if (ecx_1 u< data_62d6c8)
            eax = ecx_1 * 0x8ac + data_62d6c4
            
            if (*(eax + 0x8a8) == edx)
                int32_t* esi_1 = ecx_1 * 0x8ac + data_62d6c4
                int128_t var_70
                char const* const var_80_1
                void* var_7c_1
                int32_t eax_4
                
                if (sub_4543d0(esi_1) != 6)
                    int32_t eax_9 = sub_4543d0(esi_1)
                    int32_t eax_10
                    
                    if (eax_9 == 2)
                        eax_10 = sub_4543d0(esi_1)
                    
                    if (eax_9 != 2 || eax_10 != 3 || (esi_1[0xe] != eax_10 && *esi_1[0xc] != 1))
                        eax_4 = esi_1[1]
                        
                        if (eax_4 != 0)
                        label_45876a:
                            var_7c_1 = var_c
                            var_80_1 = "tbl_Ship"
                            goto label_4586dd
                    else
                        eax_4 = sub_458560(sub_452b90(esi_1[0xf]), esi_1)[1]
                        
                        if (eax_4 != 0)
                            goto label_45876a
                else
                    eax_4 = *((esi_1[0x11] << 2) + &data_62d288)
                    
                    if (eax_4 != 0)
                        var_7c_1 = var_c
                        var_80_1 = "tbl_GoodsIcon"
                    label_4586dd:
                        int32_t eax_6
                        int32_t edx_1
                        eax_6, edx_1 = sub_426ed0(arg3 + 0x7c, eax_4, var_80_1, var_7c_1)
                        int128_t* eax_7 = sub_4babb0(eax_6, edx_1, eax_6, &var_70)
                        *arg4 = *eax_7
                        arg4[1] = eax_7[1]
                        arg4[2] = eax_7[2]
                        arg4[3] = eax_7[3]
                        arg4[4] = eax_7[4]
                        arg4[5] = eax_7[5]
                        return arg4
                _memset(&var_70, 0, 0x60)
                *arg4 = var_70
                int128_t var_60
                arg4[1] = var_60
                int128_t var_50
                arg4[2] = var_50
                int128_t var_40
                arg4[3] = var_40
                int128_t var_30
                arg4[4] = var_30
                int128_t var_20
                arg4[5] = var_20
                return arg4
        
        char const* const var_7c_3 = "DataArray<struct RollGfx>::DataArrayGet"
        var_80 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_7c = "DataArray<struct RollGfx>::DataArrayGet"
        var_80 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_80, 
        "DataArray<struct RollGfx>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
