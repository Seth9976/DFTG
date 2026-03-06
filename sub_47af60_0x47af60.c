// 函数名称: sub_47af60
// 虚拟地址: 0x47af60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_47af60(uint32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, uint32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: if (arg3 u> 0x3e)
    if (arg3 u> 0x3e)
        return 
    
    arg1 = zx.d(lookup_table_47b988[arg3])
    int32_t var_24
    char const* const var_20
    int32_t var_8
    char* ecx
    int32_t* esi_5
    
    switch (arg1)
        case 0
            data_a755e8 = 0
            data_a755f0 = 1
        case 1
            data_a755f0 = 4
        case 2
            if (arg4 - 1 u<= 6)
                switch (arg4)
                    case 1
                        data_a755f0 = 5
                    case 2
                        data_a755f0 = 7
                    case 3
                        data_a755f0 = 9
                    case 4
                        data_a755f0 = 0xb
                    case 5
                        data_a755f0 = 0xd
                    case 7
                        data_a755f0 = 0xf
        case 3
            if (data_a755e8 == 0)
                *(arg2 * 0x28 + &data_a75520) = arg4
                return 
            
            var_20 = "RollLogStartWorld"
            var_24 = 0x7d49
            ecx = "gLogDesc.currentRound == 0"
            goto label_47b906
        case 4
            if (data_a755e8 == 0)
                void* ecx_3 = arg2 * 5
                *((ecx_3 << 3) + &data_a75524) = arg4
                *((ecx_3 << 3) + &data_a75528) = arg5
                return 
            
            var_20 = "RollLogStartFaction"
            var_24 = 0x7d50
            ecx = "gLogDesc.currentRound == 0"
            goto label_47b906
        case 5
            if (data_a755e8 != 0)
                var_20 = "RollLogConstructionDecisions"
                var_24 = 0x7d3f
                ecx = "gLogDesc.currentRound == 0"
                goto label_47b906
            
            void* ecx_1 = arg2 * 5
            *((ecx_1 << 3) + &data_a75530) = arg4
            *((ecx_1 << 3) + &data_a7552c) = 1
            *((ecx_1 << 3) + &data_a75534) = arg5
        case 6
            *(data_a755e8 * 0x15e7c + arg2 * 0x4618 + 0x7091c4) = arg4
        case 7
            int32_t eax_25 = sub_45bf60(arg5, arg6)
            int32_t edx_6 = data_a755e8 * 0x15e7c
            arg1 = eax_25 - 8
            int32_t ecx_17 = arg2 * 0x4618
            *(edx_6 + ecx_17 + 0x7091c8) += 1
            
            if (arg1 u> 5)
                var_20 = "RollLogDieAssign"
                var_24 = 0x7deb
                ecx = "Halt"
            label_47b906:
                sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                    var_24, var_20)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            switch (arg1)
                case 1
                    *(edx_6 + ecx_17 + 0x7091cc) += 1
                case 2
                    *(edx_6 + ecx_17 + 0x7091d0) += 1
                case 3
                    *(edx_6 + ecx_17 + 0x7091d4) += 1
                case 4
                    *(edx_6 + ecx_17 + 0x7091d8) += 1
                case 5
                    *(edx_6 + ecx_17 + 0x7091dc) += 1
        case 8
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogDieStock"
                var_24 = 0x7bd7
                goto label_47b8f7
            
            esi_5 = arg1 * 0x15e7c + 0x7091e0 + arg2 * 0x4618
            esi_5[1] += arg5
        label_47b406:
            *esi_5 += 1
            arg1 = sub_457200(arg2, arg4)
            
            if (*(arg1 + 0x22) != 0)
                esi_5[4] += 1
                sub_481890(arg1, &esi_5[0xd], &esi_5[5], *(arg1 + 0x24))
        case 9
            arg1 = data_a755e8
            
            if (arg1 != 0)
                esi_5 = arg1 * 0x15e7c + 0x709218 + arg2 * 0x4618
                goto label_47b406
            
            var_20 = "RollLogDieScout"
            var_24 = 0x7be7
            goto label_47b8f7
        case 0xa
            if (arg6 == 0)
                int32_t i
                
                if (arg5 != 4)
                    if (arg5 == 0x80)
                        i = 1
                        goto label_47b89a
                    
                    arg1 = arg5 - 0x200
                    
                    if (arg5 == 0x200)
                        i = 2
                        goto label_47b89a
                    
                    var_20 = "RollLogExplorePower"
                    var_24 = 0x7c30
                    ecx = "Halt"
                    goto label_47b906
                
                i = 0
            label_47b89a:
                arg1 = data_a755e8
                
                if (arg1 == 0)
                    var_20 = "RollLogExplorePower"
                    var_24 = 0x7c33
                    goto label_47b8f7
                
                int32_t ecx_38 = arg1 * 0x15e7c
                arg1 = 0
                void* edi_4 = arg2 * 0x4618 + ecx_38
                int32_t esi_12 = *(edi_4 + 0x70928c)
                
                if (esi_12 s> 0)
                    void* ecx_39 = edi_4 + 0x709250
                    
                    while (*ecx_39 != i)
                        arg1 += 1
                        ecx_39 += 4
                        
                        if (arg1 s>= esi_12)
                            goto label_47b8d9
                
                if (esi_12 s<= 0 || arg1 == 0xffffffff)
                label_47b8d9:
                    *(edi_4 + 0x70928c) = esi_12 + 1
                    *(edi_4 + (esi_12 << 2) + 0x709250) = i
            else if (arg6 == 1)
                arg1 = arg5 - 1
                
                if (arg5 != 1)
                    var_20 = "RollLogExploreStockPower"
                    var_24 = 0x7c12
                    ecx = "Halt"
                    goto label_47b906
                
                arg1 = data_a755e8
                
                if (arg1 == 0)
                    var_20 = "RollLogExploreStockPower"
                    var_24 = 0x7c15
                    goto label_47b8f7
                
                void* esi_11 = arg1 * 0x15e7c + arg2 * 0x4618
                arg1 = 0
                int32_t edx_21 = *(esi_11 + 0x7091ec)
                
                if (edx_21 s> 0)
                    void* ecx_37 = esi_11 + 0x7091e8
                    
                    while (*ecx_37 != 0)
                        arg1 += 1
                        ecx_37 += 4
                        
                        if (arg1 s>= edx_21)
                            goto label_47b84d
                
                if (edx_21 s<= 0 || arg1 == 0xffffffff)
                label_47b84d:
                    *(esi_11 + 0x7091ec) = edx_21 + 1
                    *(esi_11 + (edx_21 << 2) + 0x7091e8) = 0
            else
                arg1 = arg6 - 2
                
                if (arg6 != 2)
                    var_20 = "ProcessNotifyUILog"
                    var_24 = 0x7ffa
                    ecx = "Halt"
                    goto label_47b906
                
                int32_t i_1
                
                if (arg5 != 2)
                    arg1 = arg5 - 0x100
                    
                    if (arg5 == 0x100)
                        i_1 = 0
                        goto label_47b778
                    
                    var_20 = "RollLogExploreScoutPower"
                    var_24 = 0x7c00
                    ecx = "Halt"
                    goto label_47b906
                
                i_1 = 1
            label_47b778:
                arg1 = data_a755e8
                
                if (arg1 == 0)
                    var_20 = "RollLogExploreScoutPower"
                    var_24 = 0x7c03
                    goto label_47b8f7
                
                int32_t ecx_35 = arg1 * 0x15e7c
                arg1 = 0
                void* edi_2 = arg2 * 0x4618 + ecx_35
                int32_t edx_20 = *(edi_2 + 0x709224)
                
                if (edx_20 s> 0)
                    void* ecx_36 = edi_2 + 0x70921c
                    
                    while (*ecx_36 != i_1)
                        arg1 += 1
                        ecx_36 += 4
                        
                        if (arg1 s>= edx_20)
                            goto label_47b7ca
                
                if (edx_20 s<= 0 || arg1 == 0xffffffff)
                label_47b7ca:
                    *(edi_2 + 0x709224) = edx_20 + 1
                    *(edi_2 + (edx_20 << 2) + 0x70921c) = i_1
        case 0xb
            if (arg7 != 0xffffffff)
                sub_47a090(arg1, arg7, arg2, arg4, 2, arg5, arg6, 0)
                return 
            
            arg1 = arg5
            int32_t ebx_3
            int32_t esi_7
            
            if (arg1 == 0x20)
                ebx_3 = var_8
                esi_7 = 0
            else
                if (arg1 != 0x40)
                    var_20 = "RollLogDevelopPower"
                    var_24 = 0x7d1a
                    ecx = "Halt"
                    goto label_47b906
                
                ebx_3 = arg6
                esi_7 = 1
            
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogDevelopPower"
                var_24 = 0x7d1d
                goto label_47b8f7
            
            int32_t eax_35 = arg2 * 0x4618
            int32_t ecx_27 = *(arg1 * 0x15e7c + 0x709290 + eax_35 + 0x1d90)
            void* edx_12 = arg1 * 0x15e7c + 0x709290 + eax_35
            *(edx_12 + 0x1d90) = ecx_27 + 1
            *(edx_12 + (ecx_27 << 3) + 0x1d18) = esi_7
            *(edx_12 + (ecx_27 << 3) + 0x1d1c) = ebx_3
        case 0xc
            if (arg7 != 0xffffffff)
                sub_47a090(arg1, arg7, arg2, arg4, 3, arg5, arg6, 1)
                return 
            
            if (arg5 != 0x20)
                var_20 = "RollLogSettlePower"
                var_24 = 0x7d2d
                ecx = "Halt"
                goto label_47b906
            
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogSettlePower"
                var_24 = 0x7d30
                goto label_47b8f7
            
            int32_t eax_38 = arg2 * 0x4618
            int32_t ecx_30 = *(arg1 * 0x15e7c + 0x709290 + eax_38 + 0x1d90)
            void* edx_15 = arg1 * 0x15e7c + 0x709290 + eax_38
            *(edx_15 + 0x1d90) = ecx_30 + 1
            *(edx_15 + (ecx_30 << 3) + 0x1d18) = 2
            *(edx_15 + (ecx_30 << 3) + 0x1d1c) = var_8
        case 0xd
            int32_t eax_32
            eax_32.b = arg7 != 0
            sub_47a090(eax_32, arg4, arg2, arg4, 8, arg5, arg6, eax_32)
        case 0xe
            arg1 = arg5 - 1
            
            if (arg1 u> 0x7f)
            label_47b70a:
                var_20 = "RollLogProducePower"
                var_24 = 0x7cff
                ecx = "Halt"
                goto label_47b906
            
            arg1 = zx.d(lookup_table_47ba18[arg1])
            int32_t esi_9
            
            switch (arg1)
                case 0
                    esi_9 = 2
                case 1
                    esi_9 = 3
                case 2
                    esi_9 = 4
                case 3
                    esi_9 = 0
                case 4
                    esi_9 = 1
                case 5
                    esi_9 = 5
                case 6
                    goto label_47b70a
            
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogProducePower"
                var_24 = 0x7d06
                goto label_47b8f7
            
            int32_t eax_44 = arg2 * 0x4618
            int32_t ecx_34 = *(arg1 * 0x15e7c + 0x70cdb8 + eax_44 + 0x34)
            void* edx_19 = arg1 * 0x15e7c + 0x70cdb8 + eax_44
            *(edx_19 + 0x34) = ecx_34 + 1
            *(edx_19 + (ecx_34 << 3) + 4) = esi_9
            *(edx_19 + (ecx_34 << 3) + 8) = arg6
        case 0xf
            arg1 = arg5
            int32_t esi_8
            
            if (arg1 s<= 0x100)
                if (arg1 == 0x100)
                    var_20 = "RollLogShipPower"
                    var_24 = 0x7cd6
                    ecx = "Halt"
                    goto label_47b906
                
                if (arg1 == 8)
                    esi_8 = 4
                else if (arg1 == 0x20)
                    esi_8 = 2
                else
                    if (arg1 != 0x40)
                        goto label_47b615
                    
                    esi_8 = arg1 - 0x3d
            else if (arg1 == 0x10000)
                esi_8 = 1
            else
                if (arg1 != 0x20000)
                label_47b615:
                    var_20 = "RollLogShipPower"
                    var_24 = 0x7cd8
                    ecx = "Halt"
                    goto label_47b906
                
                esi_8 = 0
            
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogShipPower"
                var_24 = 0x7cdf
                goto label_47b8f7
            
            int32_t eax_41 = arg2 * 0x4618
            int32_t ecx_32 = *(arg1 * 0x15e7c + 0x70cdf0 + eax_41 + 0x9e0)
            void* edx_17 = arg1 * 0x15e7c + 0x70cdf0 + eax_41
            *(edx_17 + 0x9e0) = ecx_32 + 1
            *(edx_17 + (ecx_32 << 3) + 0x968) = esi_8
            *(edx_17 + (ecx_32 << 3) + 0x96c) = arg6
        case 0x10
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogDevelopDie"
                var_24 = 0x7db2
                goto label_47b8f7
            
            int32_t ecx_14 = arg1 * 0x15e7c
            int32_t eax_23 = arg2 * 0x4618
            *(ecx_14 + eax_23 + 0x709290) += 1
        case 0x11
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogSettleDie"
                var_24 = 0x7dba
                goto label_47b8f7
            
            int32_t ecx_13 = arg1 * 0x15e7c
            int32_t eax_22 = arg2 * 0x4618
            *(ecx_13 + eax_22 + 0x70b024) += 1
        case 0x12
            sub_4571c0()
        case 0x13
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogProduce"
                var_24 = 0x7dc2
                goto label_47b8f7
            
            int32_t ecx_12 = arg1 * 0x15e7c
            int32_t eax_21 = arg2 * 0x4618
            *(ecx_12 + eax_21 + 0x70cdb8) += 1
            *(ecx_12 + eax_21 + 0x70cdec) = 0
        case 0x14
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogShipTrade"
                var_24 = 0x7d8a
            label_47b8f7:
                ecx = "gLogDesc.currentRound != 0"
                goto label_47b906
            
            if (arg7 == 0)
                var_20 = "RollLogShipTrade"
                var_24 = 0x7d8b
                ecx = "numCredits != 0"
                goto label_47b906
            
            int32_t eax_9 = arg2 * 0x4618
            int32_t ecx_6 = *(arg1 * 0x15e7c + 0x70cdf0 + eax_9 + 0x964)
            void* edx_1 = arg1 * 0x15e7c + 0x70cdf0 + eax_9
            void* esi_1 = edx_1 + ecx_6 * 0x24
            *(edx_1 + 0x964) = ecx_6 + 1
            *(esi_1 + 0x52c) = arg6
            *(esi_1 + 0x538) = arg7
            *(esi_1 + 0x530) = 0
            *(esi_1 + 0x53c) = 0
        case 0x15
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogShipConsume"
                var_24 = 0x7d97
                goto label_47b8f7
            
            if (arg7 == 0)
                var_20 = "RollLogShipConsume"
                var_24 = 0x7d98
                ecx = "numVP != 0"
                goto label_47b906
            
            void* ecx_9 = arg1 * 0x15e7c + 0x70cdf0 + arg2 * 0x4618
            int32_t eax_14 = *(ecx_9 + 0x528)
            int32_t* esi_3 = eax_14 * 0x2c + ecx_9
            *(ecx_9 + 0x528) = eax_14 + 1
            esi_3[1] = arg6
            esi_3[2] = sub_457200(arg2, arg4)[2]
            *esi_3 = sub_457200(arg2, arg5)[2]
            esi_3[5] = arg7
            esi_3[3].b = 0
            esi_3[6] = 0
        case 0x16
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogDieRecall"
                var_24 = 0x7df1
                goto label_47b8f7
            
            int32_t ecx_18 = arg1 * 0x15e7c
            int32_t eax_26 = arg2 * 0x4618
            *(ecx_18 + eax_26 + 0x70d7d8) += 1
        case 0x17
            arg1 = data_a755e8
            
            if (arg1 == 0)
                var_20 = "RollLogDieRecruit"
                var_24 = 0x7df9
                goto label_47b8f7
            
            int32_t ecx_19 = arg1 * 0x15e7c
            int32_t eax_27 = arg2 * 0x4618
            *(ecx_19 + eax_27 + 0x70d7d4) += 1
        case 0x18
            int32_t eax_2 = data_a755e8 + 1
            data_a755f0 = 0
            data_a755e8 = eax_2
            data_a755ec = eax_2
}
