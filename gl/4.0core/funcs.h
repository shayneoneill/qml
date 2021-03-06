
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gl4_0core_funcs();

void gl4_0core_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl4_0core_glDepthRange(void *_glfuncs, GLdouble nearVal, GLdouble farVal);
GLboolean gl4_0core_glIsEnabled(void *_glfuncs, GLenum cap);
void gl4_0core_glGetTexLevelParameteriv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLint* params);
void gl4_0core_glGetTexLevelParameterfv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLfloat* params);
void gl4_0core_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl4_0core_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl4_0core_glGetTexImage(void *_glfuncs, GLenum target, GLint level, GLenum format, GLenum gltype, GLvoid* pixels);
void gl4_0core_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gl4_0core_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
GLenum gl4_0core_glGetError(void *_glfuncs);
void gl4_0core_glGetDoublev(void *_glfuncs, GLenum pname, GLdouble* params);
void gl4_0core_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
void gl4_0core_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gl4_0core_glReadBuffer(void *_glfuncs, GLenum mode);
void gl4_0core_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gl4_0core_glPixelStoref(void *_glfuncs, GLenum pname, GLfloat param);
void gl4_0core_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gl4_0core_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gl4_0core_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gl4_0core_glLogicOp(void *_glfuncs, GLenum opcode);
void gl4_0core_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gl4_0core_glFlush(void *_glfuncs);
void gl4_0core_glFinish(void *_glfuncs);
void gl4_0core_glEnable(void *_glfuncs, GLenum cap);
void gl4_0core_glDisable(void *_glfuncs, GLenum cap);
void gl4_0core_glDepthMask(void *_glfuncs, GLboolean flag);
void gl4_0core_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gl4_0core_glStencilMask(void *_glfuncs, GLuint mask);
void gl4_0core_glClearDepth(void *_glfuncs, GLdouble depth);
void gl4_0core_glClearStencil(void *_glfuncs, GLint s);
void gl4_0core_glClearColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl4_0core_glClear(void *_glfuncs, GLbitfield mask);
void gl4_0core_glDrawBuffer(void *_glfuncs, GLenum mode);
void gl4_0core_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl4_0core_glTexImage1D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl4_0core_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl4_0core_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl4_0core_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl4_0core_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl4_0core_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl4_0core_glPolygonMode(void *_glfuncs, GLenum face, GLenum mode);
void gl4_0core_glPointSize(void *_glfuncs, GLfloat size);
void gl4_0core_glLineWidth(void *_glfuncs, GLfloat width);
void gl4_0core_glHint(void *_glfuncs, GLenum target, GLenum mode);
void gl4_0core_glFrontFace(void *_glfuncs, GLenum mode);
void gl4_0core_glCullFace(void *_glfuncs, GLenum mode);
void gl4_0core_glIndexubv(void *_glfuncs, const GLubyte* c);
void gl4_0core_glIndexub(void *_glfuncs, GLubyte c);
GLboolean gl4_0core_glIsTexture(void *_glfuncs, GLuint texture);
void gl4_0core_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gl4_0core_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gl4_0core_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gl4_0core_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl4_0core_glTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl4_0core_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl4_0core_glCopyTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void gl4_0core_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gl4_0core_glCopyTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
void gl4_0core_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gl4_0core_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl4_0core_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gl4_0core_glCopyTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl4_0core_glTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl4_0core_glTexImage3D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl4_0core_glDrawRangeElements(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl4_0core_glBlendEquation(void *_glfuncs, GLenum mode);
void gl4_0core_glBlendColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl4_0core_glGetCompressedTexImage(void *_glfuncs, GLenum target, GLint level, GLvoid* img);
void gl4_0core_glCompressedTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl4_0core_glCompressedTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl4_0core_glCompressedTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl4_0core_glCompressedTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
void gl4_0core_glCompressedTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void gl4_0core_glCompressedTexImage3D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
void gl4_0core_glSampleCoverage(void *_glfuncs, GLfloat value, GLboolean invert);
void gl4_0core_glActiveTexture(void *_glfuncs, GLenum texture);
void gl4_0core_glPointParameteriv(void *_glfuncs, GLenum pname, const GLint* params);
void gl4_0core_glPointParameteri(void *_glfuncs, GLenum pname, GLint param);
void gl4_0core_glPointParameterfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl4_0core_glPointParameterf(void *_glfuncs, GLenum pname, GLfloat param);
void gl4_0core_glMultiDrawArrays(void *_glfuncs, GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount);
void gl4_0core_glBlendFuncSeparate(void *_glfuncs, GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void gl4_0core_glGetBufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
GLboolean gl4_0core_glUnmapBuffer(void *_glfuncs, GLenum target);
void gl4_0core_glGetBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data);
void gl4_0core_glBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
void gl4_0core_glBufferData(void *_glfuncs, GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
GLboolean gl4_0core_glIsBuffer(void *_glfuncs, GLuint buffer);
void gl4_0core_glGenBuffers(void *_glfuncs, GLsizei n, GLuint* buffers);
void gl4_0core_glDeleteBuffers(void *_glfuncs, GLsizei n, const GLuint* buffers);
void gl4_0core_glBindBuffer(void *_glfuncs, GLenum target, GLuint buffer);
void gl4_0core_glGetQueryObjectuiv(void *_glfuncs, GLuint id, GLenum pname, GLuint* params);
void gl4_0core_glGetQueryObjectiv(void *_glfuncs, GLuint id, GLenum pname, GLint* params);
void gl4_0core_glGetQueryiv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl4_0core_glEndQuery(void *_glfuncs, GLenum target);
void gl4_0core_glBeginQuery(void *_glfuncs, GLenum target, GLuint id);
GLboolean gl4_0core_glIsQuery(void *_glfuncs, GLuint id);
void gl4_0core_glDeleteQueries(void *_glfuncs, GLsizei n, const GLuint* ids);
void gl4_0core_glGenQueries(void *_glfuncs, GLsizei n, GLuint* ids);
void gl4_0core_glVertexAttribPointer(void *_glfuncs, GLuint index, GLint size, GLenum gltype, GLboolean normalized, GLsizei stride, const GLvoid* offset);
void gl4_0core_glValidateProgram(void *_glfuncs, GLuint program);
void gl4_0core_glUniformMatrix4fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix3fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix2fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniform4iv(void *_glfuncs, GLint location, GLsizei count, const GLint* value);
void gl4_0core_glUniform3iv(void *_glfuncs, GLint location, GLsizei count, const GLint* value);
void gl4_0core_glUniform2iv(void *_glfuncs, GLint location, GLsizei count, const GLint* value);
void gl4_0core_glUniform1iv(void *_glfuncs, GLint location, GLsizei count, const GLint* value);
void gl4_0core_glUniform4fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* value);
void gl4_0core_glUniform3fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* value);
void gl4_0core_glUniform2fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* value);
void gl4_0core_glUniform1fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* value);
void gl4_0core_glUniform4i(void *_glfuncs, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
void gl4_0core_glUniform3i(void *_glfuncs, GLint location, GLint v0, GLint v1, GLint v2);
void gl4_0core_glUniform2i(void *_glfuncs, GLint location, GLint v0, GLint v1);
void gl4_0core_glUniform1i(void *_glfuncs, GLint location, GLint v0);
void gl4_0core_glUniform4f(void *_glfuncs, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
void gl4_0core_glUniform3f(void *_glfuncs, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
void gl4_0core_glUniform2f(void *_glfuncs, GLint location, GLfloat v0, GLfloat v1);
void gl4_0core_glUniform1f(void *_glfuncs, GLint location, GLfloat v0);
void gl4_0core_glUseProgram(void *_glfuncs, GLuint program);
void gl4_0core_glShaderSource(void *_glfuncs, GLuint shader, GLsizei count, const GLchar** source, const GLint* length);
void gl4_0core_glLinkProgram(void *_glfuncs, GLuint program);
GLboolean gl4_0core_glIsShader(void *_glfuncs, GLuint shader);
GLboolean gl4_0core_glIsProgram(void *_glfuncs, GLuint program);
void gl4_0core_glGetVertexAttribiv(void *_glfuncs, GLuint index, GLenum pname, GLint* params);
void gl4_0core_glGetVertexAttribfv(void *_glfuncs, GLuint index, GLenum pname, GLfloat* params);
void gl4_0core_glGetVertexAttribdv(void *_glfuncs, GLuint index, GLenum pname, GLdouble* params);
void gl4_0core_glGetUniformiv(void *_glfuncs, GLuint program, GLint location, GLint* params);
void gl4_0core_glGetUniformfv(void *_glfuncs, GLuint program, GLint location, GLfloat* params);
GLint gl4_0core_glGetUniformLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gl4_0core_glGetShaderSource(void *_glfuncs, GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
void gl4_0core_glGetShaderInfoLog(void *_glfuncs, GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
void gl4_0core_glGetShaderiv(void *_glfuncs, GLuint shader, GLenum pname, GLint* params);
void gl4_0core_glGetProgramInfoLog(void *_glfuncs, GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
void gl4_0core_glGetProgramiv(void *_glfuncs, GLuint program, GLenum pname, GLint* params);
GLint gl4_0core_glGetAttribLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gl4_0core_glGetAttachedShaders(void *_glfuncs, GLuint program, GLsizei maxCount, GLsizei* count, GLuint* obj);
void gl4_0core_glGetActiveUniform(void *_glfuncs, GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* gltype, GLchar* name);
void gl4_0core_glGetActiveAttrib(void *_glfuncs, GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* gltype, GLchar* name);
void gl4_0core_glEnableVertexAttribArray(void *_glfuncs, GLuint index);
void gl4_0core_glDisableVertexAttribArray(void *_glfuncs, GLuint index);
void gl4_0core_glDetachShader(void *_glfuncs, GLuint program, GLuint shader);
void gl4_0core_glDeleteShader(void *_glfuncs, GLuint shader);
void gl4_0core_glDeleteProgram(void *_glfuncs, GLuint program);
GLuint gl4_0core_glCreateShader(void *_glfuncs, GLenum gltype);
GLuint gl4_0core_glCreateProgram(void *_glfuncs);
void gl4_0core_glCompileShader(void *_glfuncs, GLuint shader);
void gl4_0core_glBindAttribLocation(void *_glfuncs, GLuint program, GLuint index, const GLchar* name);
void gl4_0core_glAttachShader(void *_glfuncs, GLuint program, GLuint shader);
void gl4_0core_glStencilMaskSeparate(void *_glfuncs, GLenum face, GLuint mask);
void gl4_0core_glStencilFuncSeparate(void *_glfuncs, GLenum face, GLenum glfunc, GLint ref, GLuint mask);
void gl4_0core_glStencilOpSeparate(void *_glfuncs, GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
void gl4_0core_glDrawBuffers(void *_glfuncs, GLsizei n, const GLenum* bufs);
void gl4_0core_glBlendEquationSeparate(void *_glfuncs, GLenum modeRGB, GLenum modeAlpha);
void gl4_0core_glUniformMatrix4x3fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix3x4fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix4x2fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix2x4fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix3x2fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gl4_0core_glUniformMatrix2x3fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLboolean gl4_0core_glIsVertexArray(void *_glfuncs, GLuint array);
void gl4_0core_glGenVertexArrays(void *_glfuncs, GLsizei n, GLuint* arrays);
void gl4_0core_glDeleteVertexArrays(void *_glfuncs, GLsizei n, const GLuint* arrays);
void gl4_0core_glBindVertexArray(void *_glfuncs, GLuint array);
void gl4_0core_glFlushMappedBufferRange(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr length);
void gl4_0core_glFramebufferTextureLayer(void *_glfuncs, GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
void gl4_0core_glRenderbufferStorageMultisample(void *_glfuncs, GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height);
void gl4_0core_glBlitFramebuffer(void *_glfuncs, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
void gl4_0core_glGenerateMipmap(void *_glfuncs, GLenum target);
void gl4_0core_glGetFramebufferAttachmentParameteriv(void *_glfuncs, GLenum target, GLenum attachment, GLenum pname, GLint* params);
void gl4_0core_glFramebufferRenderbuffer(void *_glfuncs, GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void gl4_0core_glFramebufferTexture3D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
void gl4_0core_glFramebufferTexture2D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void gl4_0core_glFramebufferTexture1D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLenum gl4_0core_glCheckFramebufferStatus(void *_glfuncs, GLenum target);
void gl4_0core_glGenFramebuffers(void *_glfuncs, GLsizei n, GLuint* framebuffers);
void gl4_0core_glDeleteFramebuffers(void *_glfuncs, GLsizei n, const GLuint* framebuffers);
void gl4_0core_glBindFramebuffer(void *_glfuncs, GLenum target, GLuint framebuffer);
GLboolean gl4_0core_glIsFramebuffer(void *_glfuncs, GLuint framebuffer);
void gl4_0core_glGetRenderbufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl4_0core_glRenderbufferStorage(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height);
void gl4_0core_glGenRenderbuffers(void *_glfuncs, GLsizei n, GLuint* renderbuffers);
void gl4_0core_glDeleteRenderbuffers(void *_glfuncs, GLsizei n, const GLuint* renderbuffers);
void gl4_0core_glBindRenderbuffer(void *_glfuncs, GLenum target, GLuint renderbuffer);
GLboolean gl4_0core_glIsRenderbuffer(void *_glfuncs, GLuint renderbuffer);
void gl4_0core_glClearBufferfi(void *_glfuncs, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
void gl4_0core_glClearBufferfv(void *_glfuncs, GLenum buffer, GLint drawbuffer, const GLfloat* value);
void gl4_0core_glClearBufferuiv(void *_glfuncs, GLenum buffer, GLint drawbuffer, const GLuint* value);
void gl4_0core_glClearBufferiv(void *_glfuncs, GLenum buffer, GLint drawbuffer, const GLint* value);
void gl4_0core_glGetTexParameterIuiv(void *_glfuncs, GLenum target, GLenum pname, GLuint* params);
void gl4_0core_glGetTexParameterIiv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl4_0core_glTexParameterIuiv(void *_glfuncs, GLenum target, GLenum pname, const GLuint* params);
void gl4_0core_glTexParameterIiv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl4_0core_glUniform4uiv(void *_glfuncs, GLint location, GLsizei count, const GLuint* value);
void gl4_0core_glUniform3uiv(void *_glfuncs, GLint location, GLsizei count, const GLuint* value);
void gl4_0core_glUniform2uiv(void *_glfuncs, GLint location, GLsizei count, const GLuint* value);
void gl4_0core_glUniform1uiv(void *_glfuncs, GLint location, GLsizei count, const GLuint* value);
void gl4_0core_glUniform4ui(void *_glfuncs, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
void gl4_0core_glUniform3ui(void *_glfuncs, GLint location, GLuint v0, GLuint v1, GLuint v2);
void gl4_0core_glUniform2ui(void *_glfuncs, GLint location, GLuint v0, GLuint v1);
void gl4_0core_glUniform1ui(void *_glfuncs, GLint location, GLuint v0);
GLint gl4_0core_glGetFragDataLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gl4_0core_glBindFragDataLocation(void *_glfuncs, GLuint program, GLuint color, const GLchar* name);
void gl4_0core_glGetUniformuiv(void *_glfuncs, GLuint program, GLint location, GLuint* params);
void gl4_0core_glGetVertexAttribIuiv(void *_glfuncs, GLuint index, GLenum pname, GLuint* params);
void gl4_0core_glGetVertexAttribIiv(void *_glfuncs, GLuint index, GLenum pname, GLint* params);
void gl4_0core_glVertexAttribIPointer(void *_glfuncs, GLuint index, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl4_0core_glEndConditionalRender(void *_glfuncs);
void gl4_0core_glBeginConditionalRender(void *_glfuncs, GLuint id, GLenum mode);
void gl4_0core_glClampColor(void *_glfuncs, GLenum target, GLenum clamp);
void gl4_0core_glGetTransformFeedbackVarying(void *_glfuncs, GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* gltype, GLchar* name);
void gl4_0core_glBindBufferBase(void *_glfuncs, GLenum target, GLuint index, GLuint buffer);
void gl4_0core_glBindBufferRange(void *_glfuncs, GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
void gl4_0core_glEndTransformFeedback(void *_glfuncs);
void gl4_0core_glBeginTransformFeedback(void *_glfuncs, GLenum primitiveMode);
GLboolean gl4_0core_glIsEnabledi(void *_glfuncs, GLenum target, GLuint index);
void gl4_0core_glDisablei(void *_glfuncs, GLenum target, GLuint index);
void gl4_0core_glEnablei(void *_glfuncs, GLenum target, GLuint index);
void gl4_0core_glGetIntegeri_v(void *_glfuncs, GLenum target, GLuint index, GLint* data);
void gl4_0core_glGetBooleani_v(void *_glfuncs, GLenum target, GLuint index, GLboolean* data);
void gl4_0core_glColorMaski(void *_glfuncs, GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
void gl4_0core_glCopyBufferSubData(void *_glfuncs, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
void gl4_0core_glUniformBlockBinding(void *_glfuncs, GLuint program, GLuint v0, GLuint v1);
void gl4_0core_glGetActiveUniformBlockName(void *_glfuncs, GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
void gl4_0core_glGetActiveUniformBlockiv(void *_glfuncs, GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
GLuint gl4_0core_glGetUniformBlockIndex(void *_glfuncs, GLuint program, const GLchar* uniformBlockName);
void gl4_0core_glGetActiveUniformName(void *_glfuncs, GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName);
void gl4_0core_glGetActiveUniformsiv(void *_glfuncs, GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
void gl4_0core_glPrimitiveRestartIndex(void *_glfuncs, GLuint index);
void gl4_0core_glTexBuffer(void *_glfuncs, GLenum target, GLenum internalFormat, GLuint buffer);
void gl4_0core_glDrawElementsInstanced(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices, GLsizei instancecount);
void gl4_0core_glDrawArraysInstanced(void *_glfuncs, GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
void gl4_0core_glSampleMaski(void *_glfuncs, GLuint index, GLbitfield mask);
void gl4_0core_glGetMultisamplefv(void *_glfuncs, GLenum pname, GLuint index, GLfloat* val);
void gl4_0core_glTexImage3DMultisample(void *_glfuncs, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
void gl4_0core_glTexImage2DMultisample(void *_glfuncs, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
void gl4_0core_glGetSynciv(void *_glfuncs, GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
void gl4_0core_glGetInteger64v(void *_glfuncs, GLenum pname, GLint64* params);
void gl4_0core_glWaitSync(void *_glfuncs, GLsync sync, GLbitfield flags, GLuint64 timeout);
GLenum gl4_0core_glClientWaitSync(void *_glfuncs, GLsync sync, GLbitfield flags, GLuint64 timeout);
void gl4_0core_glDeleteSync(void *_glfuncs, GLsync sync);
GLboolean gl4_0core_glIsSync(void *_glfuncs, GLsync sync);
GLsync gl4_0core_glFenceSync(void *_glfuncs, GLenum condition, GLbitfield flags);
void gl4_0core_glProvokingVertex(void *_glfuncs, GLenum mode);
void gl4_0core_glDrawElementsInstancedBaseVertex(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices, GLsizei instancecount, GLint basevertex);
void gl4_0core_glDrawRangeElementsBaseVertex(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices, GLint basevertex);
void gl4_0core_glDrawElementsBaseVertex(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices, GLint basevertex);
void gl4_0core_glFramebufferTexture(void *_glfuncs, GLenum target, GLenum attachment, GLuint texture, GLint level);
void gl4_0core_glGetBufferParameteri64v(void *_glfuncs, GLenum target, GLenum pname, GLint64* params);
void gl4_0core_glGetInteger64i_v(void *_glfuncs, GLenum target, GLuint index, GLint64* data);
void gl4_0core_glVertexAttribP4uiv(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, const GLuint* value);
void gl4_0core_glVertexAttribP4ui(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, GLuint value);
void gl4_0core_glVertexAttribP3uiv(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, const GLuint* value);
void gl4_0core_glVertexAttribP3ui(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, GLuint value);
void gl4_0core_glVertexAttribP2uiv(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, const GLuint* value);
void gl4_0core_glVertexAttribP2ui(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, GLuint value);
void gl4_0core_glVertexAttribP1uiv(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, const GLuint* value);
void gl4_0core_glVertexAttribP1ui(void *_glfuncs, GLuint index, GLenum gltype, GLboolean normalized, GLuint value);
void gl4_0core_glSecondaryColorP3uiv(void *_glfuncs, GLenum gltype, const GLuint* color);
void gl4_0core_glSecondaryColorP3ui(void *_glfuncs, GLenum gltype, GLuint color);
void gl4_0core_glColorP4uiv(void *_glfuncs, GLenum gltype, const GLuint* color);
void gl4_0core_glColorP4ui(void *_glfuncs, GLenum gltype, GLuint color);
void gl4_0core_glColorP3uiv(void *_glfuncs, GLenum gltype, const GLuint* color);
void gl4_0core_glColorP3ui(void *_glfuncs, GLenum gltype, GLuint color);
void gl4_0core_glNormalP3uiv(void *_glfuncs, GLenum gltype, const GLuint* coords);
void gl4_0core_glNormalP3ui(void *_glfuncs, GLenum gltype, GLuint coords);
void gl4_0core_glMultiTexCoordP4uiv(void *_glfuncs, GLenum texture, GLenum gltype, const GLuint* coords);
void gl4_0core_glMultiTexCoordP4ui(void *_glfuncs, GLenum texture, GLenum gltype, GLuint coords);
void gl4_0core_glMultiTexCoordP3uiv(void *_glfuncs, GLenum texture, GLenum gltype, const GLuint* coords);
void gl4_0core_glMultiTexCoordP3ui(void *_glfuncs, GLenum texture, GLenum gltype, GLuint coords);
void gl4_0core_glMultiTexCoordP2uiv(void *_glfuncs, GLenum texture, GLenum gltype, const GLuint* coords);
void gl4_0core_glMultiTexCoordP2ui(void *_glfuncs, GLenum texture, GLenum gltype, GLuint coords);
void gl4_0core_glMultiTexCoordP1uiv(void *_glfuncs, GLenum texture, GLenum gltype, const GLuint* coords);
void gl4_0core_glMultiTexCoordP1ui(void *_glfuncs, GLenum texture, GLenum gltype, GLuint coords);
void gl4_0core_glTexCoordP4uiv(void *_glfuncs, GLenum gltype, const GLuint* coords);
void gl4_0core_glTexCoordP4ui(void *_glfuncs, GLenum gltype, GLuint coords);
void gl4_0core_glTexCoordP3uiv(void *_glfuncs, GLenum gltype, const GLuint* coords);
void gl4_0core_glTexCoordP3ui(void *_glfuncs, GLenum gltype, GLuint coords);
void gl4_0core_glTexCoordP2uiv(void *_glfuncs, GLenum gltype, const GLuint* coords);
void gl4_0core_glTexCoordP2ui(void *_glfuncs, GLenum gltype, GLuint coords);
void gl4_0core_glTexCoordP1uiv(void *_glfuncs, GLenum gltype, const GLuint* coords);
void gl4_0core_glTexCoordP1ui(void *_glfuncs, GLenum gltype, GLuint coords);
void gl4_0core_glVertexP4uiv(void *_glfuncs, GLenum gltype, const GLuint* value);
void gl4_0core_glVertexP4ui(void *_glfuncs, GLenum gltype, GLuint value);
void gl4_0core_glVertexP3uiv(void *_glfuncs, GLenum gltype, const GLuint* value);
void gl4_0core_glVertexP3ui(void *_glfuncs, GLenum gltype, GLuint value);
void gl4_0core_glVertexP2uiv(void *_glfuncs, GLenum gltype, const GLuint* value);
void gl4_0core_glVertexP2ui(void *_glfuncs, GLenum gltype, GLuint value);
void gl4_0core_glGetQueryObjectui64v(void *_glfuncs, GLuint id, GLenum pname, GLuint64* params);
void gl4_0core_glGetQueryObjecti64v(void *_glfuncs, GLuint id, GLenum pname, GLint64* params);
void gl4_0core_glQueryCounter(void *_glfuncs, GLuint id, GLenum target);
void gl4_0core_glGetSamplerParameterIuiv(void *_glfuncs, GLuint sampler, GLenum pname, GLuint* params);
void gl4_0core_glGetSamplerParameterfv(void *_glfuncs, GLuint sampler, GLenum pname, GLfloat* params);
void gl4_0core_glGetSamplerParameterIiv(void *_glfuncs, GLuint sampler, GLenum pname, GLint* params);
void gl4_0core_glGetSamplerParameteriv(void *_glfuncs, GLuint sampler, GLenum pname, GLint* params);
void gl4_0core_glSamplerParameterIuiv(void *_glfuncs, GLuint sampler, GLenum pname, const GLuint* param);
void gl4_0core_glSamplerParameterIiv(void *_glfuncs, GLuint sampler, GLenum pname, const GLint* param);
void gl4_0core_glSamplerParameterfv(void *_glfuncs, GLuint sampler, GLenum pname, const GLfloat* param);
void gl4_0core_glSamplerParameterf(void *_glfuncs, GLuint sampler, GLenum pname, GLfloat param);
void gl4_0core_glSamplerParameteriv(void *_glfuncs, GLuint sampler, GLenum pname, const GLint* param);
void gl4_0core_glSamplerParameteri(void *_glfuncs, GLuint sampler, GLenum pname, GLint param);
void gl4_0core_glBindSampler(void *_glfuncs, GLuint unit, GLuint sampler);
GLboolean gl4_0core_glIsSampler(void *_glfuncs, GLuint sampler);
void gl4_0core_glDeleteSamplers(void *_glfuncs, GLsizei count, const GLuint* samplers);
void gl4_0core_glGenSamplers(void *_glfuncs, GLsizei count, GLuint* samplers);
GLint gl4_0core_glGetFragDataIndex(void *_glfuncs, GLuint program, const GLchar* name);
void gl4_0core_glBindFragDataLocationIndexed(void *_glfuncs, GLuint program, GLuint colorNumber, GLuint index, const GLchar* name);
void gl4_0core_glVertexAttribDivisor(void *_glfuncs, GLuint index, GLuint divisor);
void gl4_0core_glGetQueryIndexediv(void *_glfuncs, GLenum target, GLuint index, GLenum pname, GLint* params);
void gl4_0core_glEndQueryIndexed(void *_glfuncs, GLenum target, GLuint index);
void gl4_0core_glBeginQueryIndexed(void *_glfuncs, GLenum target, GLuint index, GLuint id);
void gl4_0core_glDrawTransformFeedbackStream(void *_glfuncs, GLenum mode, GLuint id, GLuint stream);
void gl4_0core_glDrawTransformFeedback(void *_glfuncs, GLenum mode, GLuint id);
void gl4_0core_glResumeTransformFeedback(void *_glfuncs);
void gl4_0core_glPauseTransformFeedback(void *_glfuncs);
GLboolean gl4_0core_glIsTransformFeedback(void *_glfuncs, GLuint id);
void gl4_0core_glGenTransformFeedbacks(void *_glfuncs, GLsizei n, GLuint* ids);
void gl4_0core_glDeleteTransformFeedbacks(void *_glfuncs, GLsizei n, const GLuint* ids);
void gl4_0core_glBindTransformFeedback(void *_glfuncs, GLenum target, GLuint id);
void gl4_0core_glPatchParameterfv(void *_glfuncs, GLenum pname, const GLfloat* values);
void gl4_0core_glPatchParameteri(void *_glfuncs, GLenum pname, GLint value);
void gl4_0core_glGetProgramStageiv(void *_glfuncs, GLuint program, GLenum shadertype, GLenum pname, GLint* values);
void gl4_0core_glGetUniformSubroutineuiv(void *_glfuncs, GLenum shadertype, GLint location, GLuint* params);
void gl4_0core_glUniformSubroutinesuiv(void *_glfuncs, GLenum shadertype, GLsizei count, const GLuint* value);
void gl4_0core_glGetActiveSubroutineName(void *_glfuncs, GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
void gl4_0core_glGetActiveSubroutineUniformName(void *_glfuncs, GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
void gl4_0core_glGetActiveSubroutineUniformiv(void *_glfuncs, GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values);
GLuint gl4_0core_glGetSubroutineIndex(void *_glfuncs, GLuint program, GLenum shadertype, const GLchar* name);
GLint gl4_0core_glGetSubroutineUniformLocation(void *_glfuncs, GLuint program, GLenum shadertype, const GLchar* name);
void gl4_0core_glGetUniformdv(void *_glfuncs, GLuint program, GLint location, GLdouble* params);
void gl4_0core_glUniformMatrix4x3dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix4x2dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix3x4dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix3x2dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix2x4dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix2x3dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix4dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix3dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniformMatrix2dv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
void gl4_0core_glUniform4dv(void *_glfuncs, GLint location, GLsizei count, const GLdouble* value);
void gl4_0core_glUniform3dv(void *_glfuncs, GLint location, GLsizei count, const GLdouble* value);
void gl4_0core_glUniform2dv(void *_glfuncs, GLint location, GLsizei count, const GLdouble* value);
void gl4_0core_glUniform1dv(void *_glfuncs, GLint location, GLsizei count, const GLdouble* value);
void gl4_0core_glUniform4d(void *_glfuncs, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
void gl4_0core_glUniform3d(void *_glfuncs, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
void gl4_0core_glUniform2d(void *_glfuncs, GLint location, GLdouble v0, GLdouble v1);
void gl4_0core_glUniform1d(void *_glfuncs, GLint location, GLdouble v0);
void gl4_0core_glDrawElementsIndirect(void *_glfuncs, GLenum mode, GLenum gltype, const GLvoid* indirect);
void gl4_0core_glDrawArraysIndirect(void *_glfuncs, GLenum mode, const GLvoid* indirect);
void gl4_0core_glBlendFuncSeparatei(void *_glfuncs, GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void gl4_0core_glBlendFunci(void *_glfuncs, GLuint buf, GLenum src, GLenum dst);
void gl4_0core_glBlendEquationSeparatei(void *_glfuncs, GLuint buf, GLenum modeRGB, GLenum modeAlpha);
void gl4_0core_glBlendEquationi(void *_glfuncs, GLuint buf, GLenum mode);
void gl4_0core_glMinSampleShading(void *_glfuncs, GLfloat value);


#ifdef __cplusplus
} // extern "C"
#endif
