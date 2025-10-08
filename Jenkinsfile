pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                sh 'mkdir build'
                sh 'cd build'
                sh 'cmake -S.. -B.'
                sh 'cmake --build .'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}