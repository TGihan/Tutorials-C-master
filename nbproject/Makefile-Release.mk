#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AutoGenerate.o \
	${OBJECTDIR}/Constant.o \
	${OBJECTDIR}/ConstantAndFunctions.o \
	${OBJECTDIR}/DisAllowFuctions.o \
	${OBJECTDIR}/File\ Read.o \
	${OBJECTDIR}/File\ Read2.o \
	${OBJECTDIR}/File\ io.o \
	${OBJECTDIR}/File\ read1.o \
	${OBJECTDIR}/Friend\ function.o \
	${OBJECTDIR}/KonigLookup.o \
	${OBJECTDIR}/LogicConstantAndBitwiseConstant.o \
	${OBJECTDIR}/Object\ array.o \
	${OBJECTDIR}/binary\ friend.o \
	${OBJECTDIR}/binary\ return.o \
	${OBJECTDIR}/constructor\ overload.o \
	${OBJECTDIR}/copy\ constructor.o \
	${OBJECTDIR}/copy\ object\ with\ constructor.o \
	${OBJECTDIR}/object\ as\ function\ args.o \
	${OBJECTDIR}/paramiterized\ constructor.o \
	${OBJECTDIR}/precision.o \
	${OBJECTDIR}/tdpoint.o \
	${OBJECTDIR}/tdpoint1.o \
	${OBJECTDIR}/unary\ friend.o \
	${OBJECTDIR}/unary\ operator\ overloading.o \
	${OBJECTDIR}/unary\ return.o \
	${OBJECTDIR}/unformated\ character\ count.o \
	${OBJECTDIR}/widthfill.o \
	${OBJECTDIR}/write.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__tutorials.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__tutorials.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__tutorials ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AutoGenerate.o: AutoGenerate.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/AutoGenerate.o AutoGenerate.cpp

${OBJECTDIR}/Constant.o: Constant.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Constant.o Constant.cpp

${OBJECTDIR}/ConstantAndFunctions.o: ConstantAndFunctions.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/ConstantAndFunctions.o ConstantAndFunctions.cpp

${OBJECTDIR}/DisAllowFuctions.o: DisAllowFuctions.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/DisAllowFuctions.o DisAllowFuctions.cpp

.NO_PARALLEL:${OBJECTDIR}/File\ Read.o
${OBJECTDIR}/File\ Read.o: File\ Read.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/File\ Read.o File\ Read.cpp

.NO_PARALLEL:${OBJECTDIR}/File\ Read2.o
${OBJECTDIR}/File\ Read2.o: File\ Read2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/File\ Read2.o File\ Read2.cpp

.NO_PARALLEL:${OBJECTDIR}/File\ io.o
${OBJECTDIR}/File\ io.o: File\ io.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/File\ io.o File\ io.cpp

.NO_PARALLEL:${OBJECTDIR}/File\ read1.o
${OBJECTDIR}/File\ read1.o: File\ read1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/File\ read1.o File\ read1.cpp

.NO_PARALLEL:${OBJECTDIR}/Friend\ function.o
${OBJECTDIR}/Friend\ function.o: Friend\ function.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Friend\ function.o Friend\ function.cpp

${OBJECTDIR}/KonigLookup.o: KonigLookup.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/KonigLookup.o KonigLookup.cpp

${OBJECTDIR}/LogicConstantAndBitwiseConstant.o: LogicConstantAndBitwiseConstant.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/LogicConstantAndBitwiseConstant.o LogicConstantAndBitwiseConstant.cpp

.NO_PARALLEL:${OBJECTDIR}/Object\ array.o
${OBJECTDIR}/Object\ array.o: Object\ array.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Object\ array.o Object\ array.cpp

.NO_PARALLEL:${OBJECTDIR}/binary\ friend.o
${OBJECTDIR}/binary\ friend.o: binary\ friend.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/binary\ friend.o binary\ friend.cpp

.NO_PARALLEL:${OBJECTDIR}/binary\ return.o
${OBJECTDIR}/binary\ return.o: binary\ return.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/binary\ return.o binary\ return.cpp

.NO_PARALLEL:${OBJECTDIR}/constructor\ overload.o
${OBJECTDIR}/constructor\ overload.o: constructor\ overload.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/constructor\ overload.o constructor\ overload.cpp

.NO_PARALLEL:${OBJECTDIR}/copy\ constructor.o
${OBJECTDIR}/copy\ constructor.o: copy\ constructor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/copy\ constructor.o copy\ constructor.cpp

.NO_PARALLEL:${OBJECTDIR}/copy\ object\ with\ constructor.o
${OBJECTDIR}/copy\ object\ with\ constructor.o: copy\ object\ with\ constructor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/copy\ object\ with\ constructor.o copy\ object\ with\ constructor.cpp

.NO_PARALLEL:${OBJECTDIR}/object\ as\ function\ args.o
${OBJECTDIR}/object\ as\ function\ args.o: object\ as\ function\ args.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/object\ as\ function\ args.o object\ as\ function\ args.cpp

.NO_PARALLEL:${OBJECTDIR}/paramiterized\ constructor.o
${OBJECTDIR}/paramiterized\ constructor.o: paramiterized\ constructor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/paramiterized\ constructor.o paramiterized\ constructor.cpp

${OBJECTDIR}/precision.o: precision.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/precision.o precision.cpp

${OBJECTDIR}/tdpoint.o: tdpoint.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/tdpoint.o tdpoint.cpp

${OBJECTDIR}/tdpoint1.o: tdpoint1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/tdpoint1.o tdpoint1.cpp

.NO_PARALLEL:${OBJECTDIR}/unary\ friend.o
${OBJECTDIR}/unary\ friend.o: unary\ friend.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/unary\ friend.o unary\ friend.cpp

.NO_PARALLEL:${OBJECTDIR}/unary\ operator\ overloading.o
${OBJECTDIR}/unary\ operator\ overloading.o: unary\ operator\ overloading.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/unary\ operator\ overloading.o unary\ operator\ overloading.cpp

.NO_PARALLEL:${OBJECTDIR}/unary\ return.o
${OBJECTDIR}/unary\ return.o: unary\ return.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/unary\ return.o unary\ return.cpp

.NO_PARALLEL:${OBJECTDIR}/unformated\ character\ count.o
${OBJECTDIR}/unformated\ character\ count.o: unformated\ character\ count.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/unformated\ character\ count.o unformated\ character\ count.cpp

${OBJECTDIR}/widthfill.o: widthfill.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/widthfill.o widthfill.cpp

${OBJECTDIR}/write.o: write.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/write.o write.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__tutorials.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
