package ativ3;
import java.util.ArrayList;
import java.util.List;

public class OrdenarAluno {
    // Método para ordenar em ordem crescente de média usando Merge Sort
    public static void ordenarPorMedia(Aluno[] alunos) {
        if (alunos.length < 2) {
            return;
        }
        int mid = alunos.length / 2;
        Aluno[] left = new Aluno[mid];
        Aluno[] right = new Aluno[alunos.length - mid];

        System.arraycopy(alunos, 0, left, 0, mid);
        System.arraycopy(alunos, mid, right, 0, alunos.length - mid);

        ordenarPorMedia(left);
        ordenarPorMedia(right);

        merge(alunos, left, right);
    }

    private static void merge(Aluno[] alunos, Aluno[] left, Aluno[] right) {
        int i = 0, j = 0, k = 0;
        while (i < left.length && j < right.length) {
            if (left[i].getMedia() <= right[j].getMedia()) {
                alunos[k++] = left[i++];
            } else {
                alunos[k++] = right[j++];
            }
        }
        while (i < left.length) {
            alunos[k++] = left[i++];
        }
        while (j < right.length) {
            alunos[k++] = right[j++];
        }
    }

    // Método para ordenar aprovados em ordem alfabética usando Insertion Sort
    public static void ordenarAprovados(Aluno[] alunos) {
        for (int i = 1; i < alunos.length; i++) {
            Aluno key = alunos[i];
            int j = i - 1;

            // Ordena apenas alunos com média >= 7
            while (j >= 0 && alunos[j].getMedia() >= 7 && alunos[j].getNome().compareTo(key.getNome()) > 0) {
                alunos[j + 1] = alunos[j];
                j = j - 1;
            }
            alunos[j + 1] = key;
        }
    }

    // Método para ordenar reprovados em ordem alfabética usando Insertion Sort
    public static void ordenarReprovados(Aluno[] alunos) {
        for (int i = 1; i < alunos.length; i++) {
            Aluno key = alunos[i];
            int j = i - 1;

            // Ordena apenas alunos com média < 7
            while (j >= 0 && alunos[j].getMedia() < 7 && alunos[j].getNome().compareTo(key.getNome()) > 0) {
                alunos[j + 1] = alunos[j];
                j = j - 1;
            }
            alunos[j + 1] = key;
        }
    }

    // Métodos para filtrar aprovados e reprovados
    public static Aluno[] filtrarAprovados(Aluno[] alunos) {
        List<Aluno> aprovados = new ArrayList<>();
        for (Aluno aluno : alunos) {
            if (aluno.getMedia() >= 7) {
                aprovados.add(aluno);
            }
        }
        return aprovados.toArray(new Aluno[0]);
    }

    public static Aluno[] filtrarReprovados(Aluno[] alunos) {
        List<Aluno> reprovados = new ArrayList<>();
        for (Aluno aluno : alunos) {
            if (aluno.getMedia() < 7) {
                reprovados.add(aluno);
            }
        }
        return reprovados.toArray(new Aluno[0]);
    }

}
