#pragma once
const char* get_ip_protocol_name_by_number_iana(unsigned int protocol_number);
enum class IpProtocolNumber : unsigned int {
    HOPOPT           = 0,
    ICMP             = 1,
    IGMP             = 2,
    GGP              = 3,
    IPV4             = 4,
    ST               = 5,
    TCP              = 6,
    CBT              = 7,
    EGP              = 8,
    IGP              = 9,
    BBN_RCC_MON      = 10,
    NVP_II           = 11,
    PUP              = 12,
    ARGUS_DEPRECATED = 13,
    EMCON            = 14,
    XNET             = 15,
    CHAOS            = 16,
    UDP              = 17,
    MUX              = 18,
    DCN_MEAS         = 19,
    HMP              = 20,
    PRM              = 21,
    XNS_IDP          = 22,
    TRUNK_1          = 23,
    TRUNK_2          = 24,
    LEAF_1           = 25,
    LEAF_2           = 26,
    RDP              = 27,
    IRTP             = 28,
    ISO_TP4          = 29,
    NETBLT           = 30,
    MFE_NSP          = 31,
    MERIT_INP        = 32,
    DCCP             = 33,
    THREEPC          = 34,
    IDPR             = 35,
    XTP              = 36,
    DDP              = 37,
    IDPR_CMTP        = 38,
    TPPPPP           = 39,
    IL               = 40,
    IPV6             = 41,
    SDRP             = 42,
    IPV6_ROUTE       = 43,
    IPV6_FRAG        = 44,
    IDRP             = 45,
    RSVP             = 46,
    GRE              = 47,
    DSR              = 48,
    BNA              = 49,
    ESP              = 50,
    AH               = 51,
    I_NLSP           = 52,
    SWIPE_DEPRECATED = 53,
    NARP             = 54,
    MOBILE           = 55,
    TLSP             = 56,
    SKIP             = 57,
    IPV6_ICMP        = 58,
    IPV6_NONXT       = 59,
    IPV6_OPTS        = 60,
    UNKNOWN_61       = 61,
    CFTP             = 62,
    UNKNOWN_63       = 63,
    SAT_EXPAK        = 64,
    KRYPTOLAN        = 65,
    RVD              = 66,
    IPPC             = 67,
    UNKNOWN_68       = 68,
    SAT_MON          = 69,
    VISA             = 70,
    IPCV             = 71,
    CPNX             = 72,
    CPHB             = 73,
    WSN              = 74,
    PVP              = 75,
    BR_SAT_MON       = 76,
    SUN_ND           = 77,
    WB_MON           = 78,
    WB_EXPAK         = 79,
    ISO_IP           = 80,
    VMTP             = 81,
    SECURE_VMTP      = 82,
    VINES            = 83,
    IPTM_OR_TTP      = 84,
    NSFNET_IGP       = 85,
    DGP              = 86,
    TCF              = 87,
    EIGRP            = 88,
    OSPFIGP          = 89,
    SPRITE_RPC       = 90,
    LARP             = 91,
    MTP              = 92,
    AX_25            = 93,
    IPIP             = 94,
    MICP_DEPRECATED  = 95,
    SCC_SP           = 96,
    ETHERIP          = 97,
    ENCAP            = 98,
    UNKNOWN_99       = 99,
    GMTP             = 100,
    IFMP             = 101,
    PNNI             = 102,
    PIM              = 103,
    ARIS             = 104,
    SCPS             = 105,
    QNX              = 106,
    A_N              = 107,
    IPCOMP           = 108,
    SNP              = 109,
    COMPAQ_PEER      = 110,
    IPX_IN_IP        = 111,
    VRRP             = 112,
    PGM              = 113,
    UNKNOWN_114      = 114,
    L2TP             = 115,
    DDX              = 116,
    IATP             = 117,
    STP              = 118,
    SRP              = 119,
    UTI              = 120,
    SMP              = 121,
    SM_DEPRECATED    = 122,
    PTP              = 123,
    ISISOVERIPV4     = 124,
    FIRE             = 125,
    CRTP             = 126,
    CRUDP            = 127,
    SSCOPMCE         = 128,
    IPLT             = 129,
    SPS              = 130,
    PIPE             = 131,
    SCTP             = 132,
    FC               = 133,
    RSVP_E2E_IGNORE  = 134,
    MOBILITYHEADER   = 135,
    UDPLITE          = 136,
    MPLS_IN_IP       = 137,
    MANET            = 138,
    HIP              = 139,
    SHIM6            = 140,
    WESP             = 141,
    ROHC             = 142,
    UNKNOWN_143      = 143,
    UNKNOWN_144      = 144,
    UNKNOWN_145      = 145,
    UNKNOWN_146      = 146,
    UNKNOWN_147      = 147,
    UNKNOWN_148      = 148,
    UNKNOWN_149      = 149,
    UNKNOWN_150      = 150,
    UNKNOWN_151      = 151,
    UNKNOWN_152      = 152,
    UNKNOWN_153      = 153,
    UNKNOWN_154      = 154,
    UNKNOWN_155      = 155,
    UNKNOWN_156      = 156,
    UNKNOWN_157      = 157,
    UNKNOWN_158      = 158,
    UNKNOWN_159      = 159,
    UNKNOWN_160      = 160,
    UNKNOWN_161      = 161,
    UNKNOWN_162      = 162,
    UNKNOWN_163      = 163,
    UNKNOWN_164      = 164,
    UNKNOWN_165      = 165,
    UNKNOWN_166      = 166,
    UNKNOWN_167      = 167,
    UNKNOWN_168      = 168,
    UNKNOWN_169      = 169,
    UNKNOWN_170      = 170,
    UNKNOWN_171      = 171,
    UNKNOWN_172      = 172,
    UNKNOWN_173      = 173,
    UNKNOWN_174      = 174,
    UNKNOWN_175      = 175,
    UNKNOWN_176      = 176,
    UNKNOWN_177      = 177,
    UNKNOWN_178      = 178,
    UNKNOWN_179      = 179,
    UNKNOWN_180      = 180,
    UNKNOWN_181      = 181,
    UNKNOWN_182      = 182,
    UNKNOWN_183      = 183,
    UNKNOWN_184      = 184,
    UNKNOWN_185      = 185,
    UNKNOWN_186      = 186,
    UNKNOWN_187      = 187,
    UNKNOWN_188      = 188,
    UNKNOWN_189      = 189,
    UNKNOWN_190      = 190,
    UNKNOWN_191      = 191,
    UNKNOWN_192      = 192,
    UNKNOWN_193      = 193,
    UNKNOWN_194      = 194,
    UNKNOWN_195      = 195,
    UNKNOWN_196      = 196,
    UNKNOWN_197      = 197,
    UNKNOWN_198      = 198,
    UNKNOWN_199      = 199,
    UNKNOWN_200      = 200,
    UNKNOWN_201      = 201,
    UNKNOWN_202      = 202,
    UNKNOWN_203      = 203,
    UNKNOWN_204      = 204,
    UNKNOWN_205      = 205,
    UNKNOWN_206      = 206,
    UNKNOWN_207      = 207,
    UNKNOWN_208      = 208,
    UNKNOWN_209      = 209,
    UNKNOWN_210      = 210,
    UNKNOWN_211      = 211,
    UNKNOWN_212      = 212,
    UNKNOWN_213      = 213,
    UNKNOWN_214      = 214,
    UNKNOWN_215      = 215,
    UNKNOWN_216      = 216,
    UNKNOWN_217      = 217,
    UNKNOWN_218      = 218,
    UNKNOWN_219      = 219,
    UNKNOWN_220      = 220,
    UNKNOWN_221      = 221,
    UNKNOWN_222      = 222,
    UNKNOWN_223      = 223,
    UNKNOWN_224      = 224,
    UNKNOWN_225      = 225,
    UNKNOWN_226      = 226,
    UNKNOWN_227      = 227,
    UNKNOWN_228      = 228,
    UNKNOWN_229      = 229,
    UNKNOWN_230      = 230,
    UNKNOWN_231      = 231,
    UNKNOWN_232      = 232,
    UNKNOWN_233      = 233,
    UNKNOWN_234      = 234,
    UNKNOWN_235      = 235,
    UNKNOWN_236      = 236,
    UNKNOWN_237      = 237,
    UNKNOWN_238      = 238,
    UNKNOWN_239      = 239,
    UNKNOWN_240      = 240,
    UNKNOWN_241      = 241,
    UNKNOWN_242      = 242,
    UNKNOWN_243      = 243,
    UNKNOWN_244      = 244,
    UNKNOWN_245      = 245,
    UNKNOWN_246      = 246,
    UNKNOWN_247      = 247,
    UNKNOWN_248      = 248,
    UNKNOWN_249      = 249,
    UNKNOWN_250      = 250,
    UNKNOWN_251      = 251,
    UNKNOWN_252      = 252,
    UNKNOWN_253      = 253,
    UNKNOWN_254      = 254,
    RESERVED         = 255,
    BROKEN_PROTOCOL  = 256
};

enum IpProtocolNumberNotTyped : unsigned int {
    IpProtocolNumberHOPOPT           = 0,
    IpProtocolNumberICMP             = 1,
    IpProtocolNumberIGMP             = 2,
    IpProtocolNumberGGP              = 3,
    IpProtocolNumberIPV4             = 4,
    IpProtocolNumberST               = 5,
    IpProtocolNumberTCP              = 6,
    IpProtocolNumberCBT              = 7,
    IpProtocolNumberEGP              = 8,
    IpProtocolNumberIGP              = 9,
    IpProtocolNumberBBN_RCC_MON      = 10,
    IpProtocolNumberNVP_II           = 11,
    IpProtocolNumberPUP              = 12,
    IpProtocolNumberARGUS_DEPRECATED = 13,
    IpProtocolNumberEMCON            = 14,
    IpProtocolNumberXNET             = 15,
    IpProtocolNumberCHAOS            = 16,
    IpProtocolNumberUDP              = 17,
    IpProtocolNumberMUX              = 18,
    IpProtocolNumberDCN_MEAS         = 19,
    IpProtocolNumberHMP              = 20,
    IpProtocolNumberPRM              = 21,
    IpProtocolNumberXNS_IDP          = 22,
    IpProtocolNumberTRUNK_1          = 23,
    IpProtocolNumberTRUNK_2          = 24,
    IpProtocolNumberLEAF_1           = 25,
    IpProtocolNumberLEAF_2           = 26,
    IpProtocolNumberRDP              = 27,
    IpProtocolNumberIRTP             = 28,
    IpProtocolNumberISO_TP4          = 29,
    IpProtocolNumberNETBLT           = 30,
    IpProtocolNumberMFE_NSP          = 31,
    IpProtocolNumberMERIT_INP        = 32,
    IpProtocolNumberDCCP             = 33,
    IpProtocolNumberTHREEPC          = 34,
    IpProtocolNumberIDPR             = 35,
    IpProtocolNumberXTP              = 36,
    IpProtocolNumberDDP              = 37,
    IpProtocolNumberIDPR_CMTP        = 38,
    IpProtocolNumberTPPPPP           = 39,
    IpProtocolNumberIL               = 40,
    IpProtocolNumberIPV6             = 41,
    IpProtocolNumberSDRP             = 42,
    IpProtocolNumberIPV6_ROUTE       = 43,
    IpProtocolNumberIPV6_FRAG        = 44,
    IpProtocolNumberIDRP             = 45,
    IpProtocolNumberRSVP             = 46,
    IpProtocolNumberGRE              = 47,
    IpProtocolNumberDSR              = 48,
    IpProtocolNumberBNA              = 49,
    IpProtocolNumberESP              = 50,
    IpProtocolNumberAH               = 51,
    IpProtocolNumberI_NLSP           = 52,
    IpProtocolNumberSWIPE_DEPRECATED = 53,
    IpProtocolNumberNARP             = 54,
    IpProtocolNumberMOBILE           = 55,
    IpProtocolNumberTLSP             = 56,
    IpProtocolNumberSKIP             = 57,
    IpProtocolNumberIPV6_ICMP        = 58,
    IpProtocolNumberIPV6_NONXT       = 59,
    IpProtocolNumberIPV6_OPTS        = 60,
    IpProtocolNumberUNKNOWN_61       = 61,
    IpProtocolNumberCFTP             = 62,
    IpProtocolNumberUNKNOWN_63       = 63,
    IpProtocolNumberSAT_EXPAK        = 64,
    IpProtocolNumberKRYPTOLAN        = 65,
    IpProtocolNumberRVD              = 66,
    IpProtocolNumberIPPC             = 67,
    IpProtocolNumberUNKNOWN_68       = 68,
    IpProtocolNumberSAT_MON          = 69,
    IpProtocolNumberVISA             = 70,
    IpProtocolNumberIPCV             = 71,
    IpProtocolNumberCPNX             = 72,
    IpProtocolNumberCPHB             = 73,
    IpProtocolNumberWSN              = 74,
    IpProtocolNumberPVP              = 75,
    IpProtocolNumberBR_SAT_MON       = 76,
    IpProtocolNumberSUN_ND           = 77,
    IpProtocolNumberWB_MON           = 78,
    IpProtocolNumberWB_EXPAK         = 79,
    IpProtocolNumberISO_IP           = 80,
    IpProtocolNumberVMTP             = 81,
    IpProtocolNumberSECURE_VMTP      = 82,
    IpProtocolNumberVINES            = 83,
    IpProtocolNumberIPTM_OR_TTP      = 84,
    IpProtocolNumberNSFNET_IGP       = 85,
    IpProtocolNumberDGP              = 86,
    IpProtocolNumberTCF              = 87,
    IpProtocolNumberEIGRP            = 88,
    IpProtocolNumberOSPFIGP          = 89,
    IpProtocolNumberSPRITE_RPC       = 90,
    IpProtocolNumberLARP             = 91,
    IpProtocolNumberMTP              = 92,
    IpProtocolNumberAX_25            = 93,
    IpProtocolNumberIPIP             = 94,
    IpProtocolNumberMICP_DEPRECATED  = 95,
    IpProtocolNumberSCC_SP           = 96,
    IpProtocolNumberETHERIP          = 97,
    IpProtocolNumberENCAP            = 98,
    IpProtocolNumberUNKNOWN_99       = 99,
    IpProtocolNumberGMTP             = 100,
    IpProtocolNumberIFMP             = 101,
    IpProtocolNumberPNNI             = 102,
    IpProtocolNumberPIM              = 103,
    IpProtocolNumberARIS             = 104,
    IpProtocolNumberSCPS             = 105,
    IpProtocolNumberQNX              = 106,
    IpProtocolNumberA_N              = 107,
    IpProtocolNumberIPCOMP           = 108,
    IpProtocolNumberSNP              = 109,
    IpProtocolNumberCOMPAQ_PEER      = 110,
    IpProtocolNumberIPX_IN_IP        = 111,
    IpProtocolNumberVRRP             = 112,
    IpProtocolNumberPGM              = 113,
    IpProtocolNumberUNKNOWN_114      = 114,
    IpProtocolNumberL2TP             = 115,
    IpProtocolNumberDDX              = 116,
    IpProtocolNumberIATP             = 117,
    IpProtocolNumberSTP              = 118,
    IpProtocolNumberSRP              = 119,
    IpProtocolNumberUTI              = 120,
    IpProtocolNumberSMP              = 121,
    IpProtocolNumberSM_DEPRECATED    = 122,
    IpProtocolNumberPTP              = 123,
    IpProtocolNumberISISOVERIPV4     = 124,
    IpProtocolNumberFIRE             = 125,
    IpProtocolNumberCRTP             = 126,
    IpProtocolNumberCRUDP            = 127,
    IpProtocolNumberSSCOPMCE         = 128,
    IpProtocolNumberIPLT             = 129,
    IpProtocolNumberSPS              = 130,
    IpProtocolNumberPIPE             = 131,
    IpProtocolNumberSCTP             = 132,
    IpProtocolNumberFC               = 133,
    IpProtocolNumberRSVP_E2E_IGNORE  = 134,
    IpProtocolNumberMOBILITYHEADER   = 135,
    IpProtocolNumberUDPLITE          = 136,
    IpProtocolNumberMPLS_IN_IP       = 137,
    IpProtocolNumberMANET            = 138,
    IpProtocolNumberHIP              = 139,
    IpProtocolNumberSHIM6            = 140,
    IpProtocolNumberWESP             = 141,
    IpProtocolNumberROHC             = 142,
    IpProtocolNumberUNKNOWN_143      = 143,
    IpProtocolNumberUNKNOWN_144      = 144,
    IpProtocolNumberUNKNOWN_145      = 145,
    IpProtocolNumberUNKNOWN_146      = 146,
    IpProtocolNumberUNKNOWN_147      = 147,
    IpProtocolNumberUNKNOWN_148      = 148,
    IpProtocolNumberUNKNOWN_149      = 149,
    IpProtocolNumberUNKNOWN_150      = 150,
    IpProtocolNumberUNKNOWN_151      = 151,
    IpProtocolNumberUNKNOWN_152      = 152,
    IpProtocolNumberUNKNOWN_153      = 153,
    IpProtocolNumberUNKNOWN_154      = 154,
    IpProtocolNumberUNKNOWN_155      = 155,
    IpProtocolNumberUNKNOWN_156      = 156,
    IpProtocolNumberUNKNOWN_157      = 157,
    IpProtocolNumberUNKNOWN_158      = 158,
    IpProtocolNumberUNKNOWN_159      = 159,
    IpProtocolNumberUNKNOWN_160      = 160,
    IpProtocolNumberUNKNOWN_161      = 161,
    IpProtocolNumberUNKNOWN_162      = 162,
    IpProtocolNumberUNKNOWN_163      = 163,
    IpProtocolNumberUNKNOWN_164      = 164,
    IpProtocolNumberUNKNOWN_165      = 165,
    IpProtocolNumberUNKNOWN_166      = 166,
    IpProtocolNumberUNKNOWN_167      = 167,
    IpProtocolNumberUNKNOWN_168      = 168,
    IpProtocolNumberUNKNOWN_169      = 169,
    IpProtocolNumberUNKNOWN_170      = 170,
    IpProtocolNumberUNKNOWN_171      = 171,
    IpProtocolNumberUNKNOWN_172      = 172,
    IpProtocolNumberUNKNOWN_173      = 173,
    IpProtocolNumberUNKNOWN_174      = 174,
    IpProtocolNumberUNKNOWN_175      = 175,
    IpProtocolNumberUNKNOWN_176      = 176,
    IpProtocolNumberUNKNOWN_177      = 177,
    IpProtocolNumberUNKNOWN_178      = 178,
    IpProtocolNumberUNKNOWN_179      = 179,
    IpProtocolNumberUNKNOWN_180      = 180,
    IpProtocolNumberUNKNOWN_181      = 181,
    IpProtocolNumberUNKNOWN_182      = 182,
    IpProtocolNumberUNKNOWN_183      = 183,
    IpProtocolNumberUNKNOWN_184      = 184,
    IpProtocolNumberUNKNOWN_185      = 185,
    IpProtocolNumberUNKNOWN_186      = 186,
    IpProtocolNumberUNKNOWN_187      = 187,
    IpProtocolNumberUNKNOWN_188      = 188,
    IpProtocolNumberUNKNOWN_189      = 189,
    IpProtocolNumberUNKNOWN_190      = 190,
    IpProtocolNumberUNKNOWN_191      = 191,
    IpProtocolNumberUNKNOWN_192      = 192,
    IpProtocolNumberUNKNOWN_193      = 193,
    IpProtocolNumberUNKNOWN_194      = 194,
    IpProtocolNumberUNKNOWN_195      = 195,
    IpProtocolNumberUNKNOWN_196      = 196,
    IpProtocolNumberUNKNOWN_197      = 197,
    IpProtocolNumberUNKNOWN_198      = 198,
    IpProtocolNumberUNKNOWN_199      = 199,
    IpProtocolNumberUNKNOWN_200      = 200,
    IpProtocolNumberUNKNOWN_201      = 201,
    IpProtocolNumberUNKNOWN_202      = 202,
    IpProtocolNumberUNKNOWN_203      = 203,
    IpProtocolNumberUNKNOWN_204      = 204,
    IpProtocolNumberUNKNOWN_205      = 205,
    IpProtocolNumberUNKNOWN_206      = 206,
    IpProtocolNumberUNKNOWN_207      = 207,
    IpProtocolNumberUNKNOWN_208      = 208,
    IpProtocolNumberUNKNOWN_209      = 209,
    IpProtocolNumberUNKNOWN_210      = 210,
    IpProtocolNumberUNKNOWN_211      = 211,
    IpProtocolNumberUNKNOWN_212      = 212,
    IpProtocolNumberUNKNOWN_213      = 213,
    IpProtocolNumberUNKNOWN_214      = 214,
    IpProtocolNumberUNKNOWN_215      = 215,
    IpProtocolNumberUNKNOWN_216      = 216,
    IpProtocolNumberUNKNOWN_217      = 217,
    IpProtocolNumberUNKNOWN_218      = 218,
    IpProtocolNumberUNKNOWN_219      = 219,
    IpProtocolNumberUNKNOWN_220      = 220,
    IpProtocolNumberUNKNOWN_221      = 221,
    IpProtocolNumberUNKNOWN_222      = 222,
    IpProtocolNumberUNKNOWN_223      = 223,
    IpProtocolNumberUNKNOWN_224      = 224,
    IpProtocolNumberUNKNOWN_225      = 225,
    IpProtocolNumberUNKNOWN_226      = 226,
    IpProtocolNumberUNKNOWN_227      = 227,
    IpProtocolNumberUNKNOWN_228      = 228,
    IpProtocolNumberUNKNOWN_229      = 229,
    IpProtocolNumberUNKNOWN_230      = 230,
    IpProtocolNumberUNKNOWN_231      = 231,
    IpProtocolNumberUNKNOWN_232      = 232,
    IpProtocolNumberUNKNOWN_233      = 233,
    IpProtocolNumberUNKNOWN_234      = 234,
    IpProtocolNumberUNKNOWN_235      = 235,
    IpProtocolNumberUNKNOWN_236      = 236,
    IpProtocolNumberUNKNOWN_237      = 237,
    IpProtocolNumberUNKNOWN_238      = 238,
    IpProtocolNumberUNKNOWN_239      = 239,
    IpProtocolNumberUNKNOWN_240      = 240,
    IpProtocolNumberUNKNOWN_241      = 241,
    IpProtocolNumberUNKNOWN_242      = 242,
    IpProtocolNumberUNKNOWN_243      = 243,
    IpProtocolNumberUNKNOWN_244      = 244,
    IpProtocolNumberUNKNOWN_245      = 245,
    IpProtocolNumberUNKNOWN_246      = 246,
    IpProtocolNumberUNKNOWN_247      = 247,
    IpProtocolNumberUNKNOWN_248      = 248,
    IpProtocolNumberUNKNOWN_249      = 249,
    IpProtocolNumberUNKNOWN_250      = 250,
    IpProtocolNumberUNKNOWN_251      = 251,
    IpProtocolNumberUNKNOWN_252      = 252,
    IpProtocolNumberUNKNOWN_253      = 253,
    IpProtocolNumberUNKNOWN_254      = 254,
    IpProtocolNumberRESERVED         = 255,
};
IpProtocolNumber get_ip_protocol_enum_type_from_integer(int protocol_as_integer);
unsigned int get_ip_protocol_enum_as_number(IpProtocolNumber ip_protocol_enum);
