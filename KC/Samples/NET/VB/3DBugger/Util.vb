Imports KernCADnet

' Auxilary class for simple operations on point and vector types
Public Class Util
    'Copy pt1 into pt0
    Public Shared Sub CopyPoint(ByRef pt0 As DIPoint, ByRef pt1 As DIPoint)

        For i As Integer = 0 To 2
            pt0.x(i) = pt1.x(i)
        Next i
    End Sub

    'Copy iPt into pt
    Public Shared Sub CopyPoint(ByRef pt As DIPoint, ByRef iPt As I3Dpt)

        iPt.Get(pt.x(0), pt.x(1), pt.x(2))
    End Sub

    Public Shared Sub CopyPointTo(ByRef pt As DIPoint, ByRef iPt As I3Dpt)

        iPt.Set(pt.x(0), pt.x(1), pt.x(2))
    End Sub

    Public Shared Sub CopyVector(ByRef v As DIVect, ByRef iPt As I3Dpt)

        iPt.Get(v.v(0), v.v(1), v.v(2))
    End Sub

    Public Shared Sub CopyVectorTo(ByRef v As DIVect, ByRef iPt As I3Dpt)

        iPt.Set(v.v(0), v.v(1), v.v(2))
    End Sub

    Public Shared Sub CopyVector(ByRef v0 As DIVect, ByRef v1 As DIVect)

        For i As Integer = 0 To 2
            v0.v(i) = v1.v(i)
        Next i
    End Sub

    'Do points coinside up to a tolerrance?
    Public Shared Function IsSame(ByRef pt0 As DIPoint, ByRef pt1 As DIPoint) As Boolean
        For i As Integer = 0 To 2
            If (Math.Abs(pt0.x(i) - pt1.x(i)) > 0.00000001) Then Return False
        Next i
        Return True
    End Function

    Public Shared Sub SetCurrentName(ByVal strName As String, ByVal iDraw As IDraw)

        Dim iKCContext As IKCContext = IDraw
        iKCContext.SetStringParam(0, strName)   'Object name is the only string parameter currently
    End Sub

    Public Shared Function CreatePoint() As DIPoint

        Dim pt As New DIPoint
        ReDim pt.x(2)
        Return pt
    End Function


    Public Shared Function CreateVector() As DIVect
        Dim vect As DIVect = New DIVect
        ReDim vect.v(2)
        Return vect
    End Function
End Class
